#include<stdio.h>
int main(){
    int a=5;
    int b=6;
    int *const ip=&a;
    printf("Address of ip: %u",ip);

    //ip=&b;

    return 0;
}
