int main(void)
{
    int gs1 = 0;
    int identifier = 0;
    int publisher = 0;
    int item = 0;
    int check = 0;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &identifier, &publisher, &item, &check);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", identifier);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item);
    printf("Check digit: %d\n", check);

  return 0;
}