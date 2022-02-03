#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3] = {0}, i,j,det ;

    for (i=0; i<3; i++)
    {
        for (j=0 ; j<3; j++)
        {
            printf("Please enter the value of (%d,%d): ",i+1,j+1);
            scanf("%d", &m[i][j]);
        }

        printf("\n");
    }


    printf("You just input this matrix: \n");
    for (i=0; i<3; i++)
    {
        for (j=0 ; j<3; j++)
        {
            printf("%2d ",m[i][j]);
        }

        printf("\n");
    }


    det =   ((m[0][0]*((m[1][1]*m[2][2])-(m[2][1]*m[1][2])))
            -(m[0][1]*((m[1][0]*m[2][2])-(m[2][0]*m[1][2])))
            +(m[0][2]*((m[1][0]*m[2][1])-(m[2][0]*m[1][1]))));
    printf( "The determinant of this matrix is: %d",det);
    return 0;
}
