#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char name[]="Aptech";
    char address[]="Kumaripati";
    f=fopen("file.txt","w");
    fprintf(f,"%s\t%s",name,address);
    printf("data write successfully.");
    fclose(f);

getch();
return 0;
}
