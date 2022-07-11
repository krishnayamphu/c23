#include<stdio.h>
#include<string.h>
int main(){
char username[50];
char password[50];
printf("Username:");
scanf("%s",&username);

printf("Password:");
scanf("%s",&password);

if(strcmpi(username,"admin")==0 && strcmp(password,"a123")==0)
{
    printf("Welcome admin !");
}else{
    printf("Invalid username or password");
}
return 0;
}
