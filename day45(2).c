#include"stdio.h"
int reverse(int);
main()
{
        int x,n;
        printf("enter a number:");
        scanf("%d",&n);
        x=reverse(n);
        printf("%d",x);
}
int reverse(int n)
{
        static int r,s=0;
        if(n>0)
        {
                r=n%10;
                s=s*10+r;
                n=n/10;
                reverse(n);
        }
        return s;
}
