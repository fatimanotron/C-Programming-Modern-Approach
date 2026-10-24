from pathlib import Path
import re
import argparse

ROOT = Path(__file__).resolve().parent

EXCLUDED_DIRS = {
    ".git",
    ".venv",
    "venv",
    "node_modules",
    "__pycache__",
}


def extract_comments(source: str):
    """
    Extract comments from a file only if it contains no code.
    Returns None when non-comment code is detected.
    """
    comments = []
    i = 0
    n = len(source)

    while i < n:
        if source[i].isspace():
            i += 1
            continue

        if source.startswith("//", i):
            end = source.find("\n", i)
            if end == -1:
                end = n
            comments.append(source[i + 2:end].strip())
            i = end
            continue

        if source.startswith("/*", i):
            end = source.find("*/", i + 2)
            if end == -1:
                return None
            comments.append(source[i + 2:end].strip())
            i = end + 2
            continue

        # Anything else (including preprocessor directives, strings,
        # character literals, or code tokens) makes this a non-comment-only file.
        return None

    return comments


def to_markdown(comments, original_name):
    parts = []

    for comment in comments:
        if not comment:
            continue

        cleaned_lines = [
            re.sub(r"^\s*\*\s?", "", line).rstrip()
            for line in comment.splitlines()
        ]
        text = "\n".join(cleaned_lines).strip()

        if text:
            parts.append(text)

    if not parts:
        return None

    return f"# {Path(original_name).stem}\n\n" + "\n\n".join(parts) + "\n"


def main():
    parser = argparse.ArgumentParser(
        description="Convert comment-only C files to Markdown."
    )
    parser.add_argument(
        "--apply",
        action="store_true",
        help="Create Markdown files and delete converted C files.",
    )
    args = parser.parse_args()

    candidates = []

    for path in ROOT.rglob("*.c"):
        if any(part in EXCLUDED_DIRS for part in path.parts):
            continue

        try:
            source = path.read_text(encoding="utf-8-sig")
        except (UnicodeDecodeError, OSError) as error:
            print(f"SKIP (could not read): {path} — {error}")
            continue

        comments = extract_comments(source)
        if comments is None:
            continue

        markdown = to_markdown(comments, path.name)
        if markdown is None:
            continue

        destination = path.with_suffix(".md")
        if destination.exists():
            print(f"SKIP (Markdown already exists): {destination}")
            continue

        candidates.append((path, destination, markdown))

    if not candidates:
        print("No comment-only C files found.")
        return

    print(f"\nFound {len(candidates)} candidate(s):")
    for source, destination, _ in candidates:
        print(
            f"  {source.relative_to(ROOT)} -> "
            f"{destination.relative_to(ROOT)}"
        )

    if not args.apply:
        print("\nDry run only. No files changed.")
        print("Review the list, then run: python convert_text_only.py --apply")
        return

    confirm = input(
        "\nCreate .md files AND delete the original .c files? [y/N] "
    ).strip().lower()

    if confirm != "y":
        print("Cancelled. No files changed.")
        return

    for source, destination, markdown in candidates:
        destination.write_text(markdown, encoding="utf-8")
        source.unlink()
        print(f"Converted: {source.relative_to(ROOT)}")

    print(f"\nDone. Converted {len(candidates)} file(s).")


if __name__ == "__main__":
    main()
