#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
f=fopen("data1.txt","w");
fputs("welcome",f);
printf("data write successfully.");
fclose(f);
getch();
return 0;
}
