#include<stdio.h>
int main(){
    int a=5;
    char ch='a';
    void *ptr;

    ptr=&a;
    printf("Address of ptr: %u",ptr);
    printf("\nSize of ptr: %d",sizeof(ptr));

    ptr=&ch;
    printf("\nAddress of ptr: %u",ptr);
    printf("\nSize of ptr: %d",sizeof(ptr));
    return 0;
}
