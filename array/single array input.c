#include<stdio.h>
int main()
{
    int num[5];
    int i,j;
    for(i=0;i<5; i++){
        printf("Enter number:");
        scanf("%d",&num[i]);
    }

    printf("\n:::::::: OUTPUT ::::::::\n");
    for(j=0;j<5; j++){
        printf("%d\n",num[j]);
    }


return 0;
}
