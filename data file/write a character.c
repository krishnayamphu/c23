#include<stdio.h>
FILE *f;
int main(){
f=fopen("doc.txt","w");
putc('B',f);
printf("Date write successfully.");
fclose(f);
return 0;
}
