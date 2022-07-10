#include<stdio.h>
int main()
{
    int num[2][2]={{10,20},
                   {30,40}};
    int i,j;

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
