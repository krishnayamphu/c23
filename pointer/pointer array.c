#include<stdio.h>
int main(){

int num[]={ 1, 2, 3, 4, 5 };
int *p=num;
int i;

for(i=0;i<5; i++){
    printf("%d\n",p[i]);
}
return 0;
}
