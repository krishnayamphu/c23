#include<stdio.h>
#include<conio.h>
int main(){
float math, eng, p=0;
printf("Enter math marks:");
scanf("%f",&math);
printf("Enter english marks:");
scanf("%f",&eng);

if(math>=35 && eng>=35)
{
   printf("Result: Pass\n");
   p=(math+eng)/2;
   printf("Percentage: %0.2f\n",p);
   if(p>=80)
    {
        printf("Division: Distinction");
    }
   else if(p>=60)
    {
        printf("Division: First");
    }
   else if(p>=45)
    {
        printf("Division: Second");
    }
   else
    {
        printf("Division: Third");
    }
}
else
{
    printf("Fail");
}
getch();
return 0;
}
