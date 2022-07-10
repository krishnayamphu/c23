#include<stdio.h>
#include<conio.h>
void sum(int x, int y);
int main()
{
sum(5,6);
sum(50,60);
getch();
return 0;
}
void sum(int x, int y)
{
   printf("Total sum: %d\n",(x+y));
}
