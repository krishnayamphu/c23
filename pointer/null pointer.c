#include<stdio.h>
int main(){
    int *ptr=NULL;

    if(ptr==NULL){
        printf("null pointer");
    }else{
        printf("dereferencing the illegal pointer");
    }
   // printf("Address: %d", ptr); // printing the value of ptr.
    //printf("Value: %d", *ptr); // dereferencing the illegal pointer
    return 0;
}
