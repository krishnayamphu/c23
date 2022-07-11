#include<stdio.h>
void hello();
int main()
{
    hello();
    return 0;
}

void hello(){
    static int i=1;
    printf("Hello Wolrd\n");
    i++;
    if(i<=5){
        hello();
    }

}
