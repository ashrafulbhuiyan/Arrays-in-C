#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5]={0}, i,j,k;

    for (i=0; i<5; i++)
    {
     for (k=1; k<=5-i;k++)
      {
          printf(" ");
      }
        for (j=0; j<=i; j++)
        {
            if ((j==0) || (j==i))
                {
                    a[i][j]=1;
                }
            else
            {
                a[i][j] =  a[i-1][j-1]+a[i-1][j];
            }
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
