#include<stdio.h>
#include<conio.h>
typedef struct{
char name[20];
int age;
}Person;
FILE *f;
void viewPerson(){
Person p;
f=fopen("persons.txt","r");
printf("Name\t\t\tAge");
printf("\n-------------------------------\n");
    while(fread(&p,sizeof(p),1,f)){
    printf("%-20s \t%-5d\n",p.name,p.age);
    }
fclose(f);
}
int main(){
    viewPerson();
getch();
return 0;
}
