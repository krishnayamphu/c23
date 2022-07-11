#include<stdio.h>
#include<string.h>
int main(){
char s1[]="aaa";
char s2[]="bbb";
char s3[]="aaa";

printf("%d\n",strcmp(s1,s3));
printf("%d",strcmp(s1,s2));
return 0;
}
