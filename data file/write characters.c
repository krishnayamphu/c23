#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
char ch;
f=fopen("data.txt","w");
printf("Type some text:");
while((ch=getchar())!='\n')
{
    fputc(ch,f);
}
printf("data write successfully.");
fclose(f);
getch();
return 0;
}
