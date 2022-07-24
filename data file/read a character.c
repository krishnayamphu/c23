#include<stdio.h>
FILE *f;
int main(){
char ch;
f=fopen("doc.txt","r");
ch=getc(f);
printf("%c",ch);
fclose(f);
return 0;
}
