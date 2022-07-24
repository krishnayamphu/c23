#include<stdio.h>
#include<string.h>
struct Person{
    char name[20];
    int age;
};
int main(){
struct Person p[5];
int i;
p[0].age=20;
p[1].age=30;
p[2].age=40;
p[3].age=50;
p[4].age=60;

strcpy(p[0].name,"Ram");
strcpy(p[1].name,"Hari");
strcpy(p[2].name,"Sita");
strcpy(p[3].name,"Gita");
strcpy(p[4].name,"Nita");

for(i=0; i<5; i++){
    printf("Name: %s",p[i].name);
    printf("\nAge: %d",p[i].age);
    printf("\n------------------\n");
}

return 0;
}
