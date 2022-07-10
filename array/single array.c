#include<stdio.h>
int main()
{
    int num[5];
    int i;
    num[0]=10;
    num[1]=20;
    num[2]=30;
    num[3]=40;
    num[4]=50;

    printf("%d",num[0]);
    printf("\n---------------\n");

    for(i=0;i<5; i++){
        printf("%d\n",num[i]);
    }


return 0;
}
