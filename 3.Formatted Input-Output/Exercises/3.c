// For each of the following pairs of scanf format strings, indicate whether or not the two
// strings are equivalent. If they’re not, show how they can be distinguished.
// (a) "%d"
// versus " %d"
// (b) "%d-%d-%d" versus "%d -%d -%d"
// (c) "%f"
// versus "%f "
// (d) "%f,%f"
// versus "%f, %f"

//Answer: In (a), (b), and (d), the two strings are equal because `scanf` ignores spaces in these places. But in (c), they are different because the second string has a space at the end. This makes `scanf` wait for a non-space character.