#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=5; i++){
            if(i==2 || i==4){
                continue;
            }
        printf("%d\n",i);
    }
    return 0;
}
