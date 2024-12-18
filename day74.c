#include"stdio.h"
main()
{
        int x[3][5]={
                        10,0,40,50,
                        1,0,0,4,0,
                        10,0,0,0,155
                };
        int i,j,a=0,b=0;
        for(i=0;i<3;i++)
        {
                for(j=0;j<5;j++)
                {
                        if (x[i][j]==0)
                                a++;
                        else
                                b++;
                }
        }
        if(a>b)
                printf("it is a sparce martix");
        else
                printf("NOT");
}
