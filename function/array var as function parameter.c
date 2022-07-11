#include<stdio.h>
void printNum(int num[5]);
int main()
{
    int n[]={10,20,30,40,50};
    printNum(n);
    return 0;
}
void printNum(int num[5]){
    int i;
    for(i=0; i<5; i++){
        printf("%d\n",num[i]);
    }
}
