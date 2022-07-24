#include<stdio.h>
#include<string.h>
struct Dob{
    int day;
    int month;
    int year;
};
typedef struct{
    char name[20];
    struct Dob dob;
}Student;

int main(){
Student s;
s.dob.day=10;
s.dob.month=11;
s.dob.year=1992;
strcpy(s.name,"Ram");

printf("Name: %s",s.name);
printf("\nDate of Birth: %d-%d-%d",s.dob.day,s.dob.month,s.dob.year);
return 0;
}
