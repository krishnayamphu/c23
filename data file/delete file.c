#include<stdio.h>
#include<conio.h>
int main(){
    char filename[30];
    printf("Enter file name:");
    scanf("%s",&filename);
    int status=remove(filename);
    if(status==0){
        printf("file deleted successfully. %d",status);
    }else{
        printf("File can't delete. %d",status);
    }
getch();
return 0;
}
