#include<stdio.h>
#include<conio.h>
void test(); //1.function declaration
int main(){
test(); //3. function calling/invoking
test();
test();

getch();
return 0;
}

void test(){ //2. function definition
    printf("Testing something\n");
}
