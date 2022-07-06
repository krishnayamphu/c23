#include<stdio.h>

int main()
{
    int i;
    char ch;
    while((ch=getchar())!='\n'){
        printf("%c",ch);
        i++;
    }
return 0;
}
