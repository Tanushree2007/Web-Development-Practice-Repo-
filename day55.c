#include"stdio.h"
int perfect(int*);
main()
{
        int x,n;
        printf("enter a number");
        scanf("%d",&n);
        x=perfect(&n);
        if(x==n)
                printf("it is a perfect no");
        else
                printf("not");

}
int perfect(int *p)
{
        int s=0,i;
        for(i=1;i<*p;i++)
        {
                if(*p%i==0)
                        s=s+1;
        }
        return s;
                                                                                             1,1           Top

}