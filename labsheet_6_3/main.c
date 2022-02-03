#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3]={0},i,j, sc=0, ec=2, sr=0, er=2;
    printf("\tFor (3x3) matrix\n");

    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
        printf("Please enter the value of (%d,%d): ",i+1,j+1);
        scanf("%d",&m[i][j]);
        }
    }
    printf("\nYour inputed matrix is:\n");
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%3d ", m[i][j]);
        }
         printf("\n");
    }

    printf("\nSpirally: ");
    for (i=sc; i<=ec; i++)
    {
        printf("%d ", m[sr][i]);
    }

    sr+=1; //1

    for (i=sr; i<=er; i++)
    {
        printf("%d ", m[i][ec]);
    }
    ec-=1; //1

    for (i=ec; i>=sc; i--)
    {
        printf("%d ", m[er][i]);
    }
    er-=1;//1
    for (i=sr; i<=er; i++)
    {
        printf("%d ", m[i][sc]);
    }
    sc+=1;
    for(i=sc; i<=ec; i++)
    {
        printf("%d ", m[sr][i]);
    }
    return 0;
}
