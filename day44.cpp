float circle(float rad)
{
        float a=3.14*rad*rad;
        return a;
}
int gcd(int a,int b)
{
        while(a!=b)
        {
                if(a>b)
                        a=a-b;
                else
                        b=b-a;
        }
        return a;
}
int reverse (int n)
{
        int r,s=0;
        while(n>0)
        {
                r=n%10;
                s=s*10+r;
                n=n/10;
        }
        return s;
}
