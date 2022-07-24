#include<stdio.h>
int main(){
int a=5;
int *p,**pt;
p=&a;
pt=&p;

printf("Address of a: %u",&a);
printf("\nAddress value of p: %u",p);

printf("\n\nAddress of p: %u",&p);
printf("\nAddress value of pt: %u",pt);

printf("\n-------------------\n");
printf("Value of a: %d",a);
printf("\nValue of p: %d",*p);
printf("\nValue of pt: %d",**pt);


return 0;
}
