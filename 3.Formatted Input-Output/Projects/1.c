int main(void)
{
    int year = 0;
    int month = 0;
    int day = 0;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month,&day,&year);
    printf("You entered the date %d%02d%02d\n", year,month,day);
  return 0;
}