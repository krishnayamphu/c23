#include<stdio.h>
#include<string.h>
typedef struct{
    char name[20];
    float eng;
    float nep;
}Student;
int main(){

Student s={"Ram",56.5,65};
printf("Name: %s",s.name);
printf("\nEnglish: %0.2f",s.eng);
printf("\nNepali: %0.2f",s.nep);
return 0;
}
