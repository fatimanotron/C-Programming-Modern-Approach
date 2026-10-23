#include <stdio.h>
int main(void)
{
    int item = 0;
    float price = 0;
    int day =0 ;
    int month=0;
    int year=0;

    printf("Enter item number: ");
    scanf("%d",&item);
    printf("Enter unit price: ");
    scanf("%f",&price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month,&day,&year);

    printf("Item\t\tUnit price\t\tPurchase Date\n");
    printf("%d\t\t$%.2f\t\t%02d/%02d/%02d",item,price,month,day,year);


  return 0;
}