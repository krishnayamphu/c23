#include<stdio.h>
#include<string.h>
typedef union{
    int status;
}State;

int main(){
    State s;
    s.status=1;
    printf("%d",s.status);
    return 0;
}
