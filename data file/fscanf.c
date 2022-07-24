#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char name[20];
    char address[50];
    f=fopen("file.txt","r");
    while(fscanf(f,"%s%s",&name,&address)!=EOF){
       printf("Name: %s",name);
       printf("\nAddress: %s",address);
    }

    fclose(f);

getch();
return 0;
}
