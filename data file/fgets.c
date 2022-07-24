#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
    char data[5];
    f=fopen("data1.txt","r");
    fgets(data,4,f);
    printf("%s",data);
    fclose(f);

getch();
return 0;
}
