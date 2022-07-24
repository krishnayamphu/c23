#include<stdio.h>
int main(){
int status=remove("nepal.txt");
printf("file deleted successfully. %d",status);
return 0;
}
