#include<stdio.h>
int main()
{
    char name[20];
    start:
    printf("Enter Name:");
    scanf("%s",&name);

    printf("\nHello %s\n\n",name);
    goto start;
    return 0;
}
