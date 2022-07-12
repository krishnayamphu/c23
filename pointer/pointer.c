#include<stdio.h>
int main(){
int a=5;
int *ip;
ip=&a;

printf("Address of a: %u\n",&a);
printf("Address value of p: %u\n\n",ip);

printf("Value of a: %d\n",a);
printf("Value of p: %d",*ip);


return 0;
}
