#include<stdio.h>
int main(){
int status=rename("doc.txt","nepal.txt");
printf("file renamed successfully. %d",status);

return 0;
}
