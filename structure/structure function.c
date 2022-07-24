#include<stdio.h>
typedef struct{
    char name[20];
    int age;
}Person;
void getInfo(Person p);
int main(){

Person p={"Ram", 40};
getInfo(p);

return 0;
}
void getInfo(Person p){
    printf("Name: %s",p.name);
    printf("\nAge: %d",p.age);
}
