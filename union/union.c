#include<stdio.h>
#include<string.h>
union Person{
    char name[20];
    int age;
};
int main(){
    union Person p;
   // p.age=40;
    strcpy(p.name,"ram");

    //printf("Age: %d",p.age);
    printf("\nName: %s",p.name);
    return 0;
}
