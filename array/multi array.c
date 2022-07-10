#include<stdio.h>
int main()
{
    int num[2][2];
    int i,j;

    num[0][0]=10;
    num[0][1]=20;
    num[1][0]=30;
    num[1][1]=40;

    printf("%d\n",num[1][1]);
    printf("\n.................\n");

    for(i=0; i<2; i++)
    {
      for(j=0; j<2; j++)
        {
         printf("%d ",num[i][j]);
        }
      printf("\n");
    }

return 0;
}
