#include "stdio.h"
main()
{
        int x [3][5]={
                        1,2,3,4,5,
                        6,7,8,9,10,
                        11,12,13,14,15
                };
        int y[5][3];
        int i,j;
        for(i=0;i<3;i++)
                {
                        for(j=0;j<5;j++)
                        {
                                y[j][i]=x[i][j];
                        }
                }
                for(i=0;i<5;i++)
                {
                        for(j=0;j<3;j++)
                        {
                                printf("%d",y[i][j]);
                        }
                        printf("\n");
                }
}
