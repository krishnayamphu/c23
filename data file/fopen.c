#include<stdio.h>
FILE *f;
int main(){
f=fopen("doc.txt","w");
printf("File created successfully.");
fclose(f);
return 0;
}
