#include<stdio.h>
#include<conio.h>
int main(){
int a;
char name[20];

printf("Enter the value of a:");
scanf("%d",&a);

printf("Enter your name:");
scanf("%s",&name);

printf("Value of a: %d",a);
printf("\nName: %s",name);
getch();

return 0;
}
