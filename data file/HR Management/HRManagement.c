#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include "Person.c"
FILE *f,*fp;
#include "Menu.c"
#include "CreatePerson.c"
#include "ViewPerson.c"
#include "UpdatePerson.c"
#include "DeletePerson.c"
#include "SearchPerson.c"

int main(){
    int choice;
    while(1){
        menu();
        scanf("%d",&choice);
        switch(choice){
        case 1:
            viewPerson();
            getch();
            break;
        case 2:
            createPerson();
            getch();
            break;
        case 3:
            updatePerson();
            getch();
            break;
        case 4:
            deletePerson();
            getch();
            break;
        case 5:
            searchPerson();
            getch();
            break;
        case 6:
            printf("Press any key to continue.");
            exit(0);
            break;
        default:
            printf("Invalid choice.");
            break;
        }
    }

getch();
return 0;
}
