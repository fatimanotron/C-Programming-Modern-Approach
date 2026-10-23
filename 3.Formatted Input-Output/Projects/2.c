// Write a program that formats product information entered by the user. A session with the
// program should look like this:
// Enter item number: 583
// Enter unit price: 13.5
// Enter purchase date (mm/dd/yyyy): 10/24/2010
// Item            Unit            Purchase
//                 Price           Date
// 583             $  13.50        10/24/2010
// The item number and date should be left justified; the unit price should be right justified.
// Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.


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