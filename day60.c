#include"stdio.h"
main()
{
        int x[8]={22,24,27,29,31,34,38,41};
        int sum=0,i,even=0,odd=0;
        for (i=0;i<8;i++)
        {
                if (x[i]%2==0)
                        even++;

                else
                        odd++;

        }
        printf("%d",even);
        printf("%d",odd);
}
