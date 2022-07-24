#include<stdio.h>
#include<conio.h>
FILE *f;
typedef struct{
    char name[20];
    int age;
}Person;

int main(){
    f=fopen("person.txt","w");
    Person p={"ram",20};
    fwrite(&p,sizeof(p),1,f);
    printf("Person deatails added.");

getch();
return 0;
}
