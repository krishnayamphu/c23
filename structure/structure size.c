#include<stdio.h>
typedef struct{
    char name[20];
    int age;
}Person;
int main(){
    Person p;
    printf("%d",sizeof(p));
    return 0;
}
