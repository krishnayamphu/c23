#include<stdio.h>
int main()
{
   printf("Step 1\n");
   goto last;
   printf("Step 2\n");
   printf("Step 3\n");

   last:
   printf("Step 4\n");
    return 0;
}
