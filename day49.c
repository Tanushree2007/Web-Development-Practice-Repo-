#include "stdio.h"

void swap(int,int);

main()

{
        int a=5,b=10;

                printf("%d %d\n",a,b); //5 10 
        swap(a,b); //call by value

                printf("%d %d\n",a,b); //5 10
}
void swap(int p,int q)
{

        int c=p;

        p=q;

        q=c;
}
