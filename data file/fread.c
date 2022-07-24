#include<stdio.h>
#include<conio.h>
FILE *f;
typedef struct{
    char name[20];
    int age;
}Person;

int main(){
    Person p;
    f=fopen("person.txt","r");

    while(fread(&p,sizeof(p),1,f)){
        printf("Person Name: %s",p.name);
        printf("\nPerson Age: %d",p.age);
    }
getch();
return 0;
}
