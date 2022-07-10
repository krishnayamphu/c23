#include<stdio.h>
#include<conio.h>
float getDiscount(float price, float percentage);
int main()
{
float mrp, p;
printf("Enter Price:");
scanf("%f",&mrp);
printf("Enter Discount Price:");
scanf("%f",&p);
printf("Dsicount Amount: %0.2f",getDiscount(mrp,p));
getch();
return 0;
}
float getDiscount(float price, float percentage)
{
   return (price*percentage)/100;
}
