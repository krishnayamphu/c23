#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct{
char name[20];
int age;
}Person;
FILE *f,*fp;

void createPerson(){
    Person p;
    f=fopen("persons.txt","a+");
    char next='y';
    while(next=='y' || next=='Y'){
        printf("\nName:");
        scanf("%s",&p.name);
        printf("Age:");
        scanf("%d",&p.age);
        fwrite(&p,sizeof(p),1,f);
        printf("Data inserted successfully.");
        printf("\n\nAdd another recored? (Y/N):");
        next=getche();
    }
    fclose(f);
}
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
void updatePerson(){
char name[20];
Person p;
f=fopen("persons.txt","r");
fp=fopen("temp.txt","w");
printf("Update name:");
scanf("%s",&name);
    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(name,p.name)==0){
            printf(":------ Existing Details ------:");
            printf("\n-------------------------------\n");
            printf("%-20s \t%-5d\n",p.name,p.age);
        }
    }
    rewind(f);
    while(fread(&p,sizeof(p),1,f)){
        if(strcmpi(name,p.name)==0){
           printf("New name:");
           scanf("%s",&p.name);
           printf("New age:");
           scanf("%d",&p.age);
           fwrite(&p,sizeof(p),1,fp);
        }else{
        fwrite(&p,sizeof(p),1,fp);
        }
    }
fclose(f);
fclose(fp);
remove("persons.txt");
rename("temp.txt","persons.txt");
printf("Data Updated.");
}
int main(){
    int choice;
    printf("----- MENU -----");
    printf("\n1. View Persons");
    printf("\n2. Create Person");
    printf("\n3. Update Person");
    printf("\n4. Delete Person");
    printf("\n1. Exit");

    printf("\n\nEnter choice:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        viewPerson();
        break;
    case 2:
        createPerson();
        break;
    case 3:
        updatePerson();
        break;
    default:
        printf("Invalid choice.");
        break;
    }
getch();
return 0;
}
