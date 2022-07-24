#include<stdio.h>
#include<conio.h>
FILE *f;
int main(){
char ch;
f=fopen("data.txt","r");
while((ch=getc(f))!=EOF)
{
    printf("%c",ch);
}
fclose(f);
getch();
return 0;
}
