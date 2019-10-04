#include<stdio.h>
int main()
{
    long long int h, o, d;
    while(scanf("%lld %lld", &h, &o)==2)
    {
        d = h - o;
        if(d<0)
        {
            d=d*(-1);
        }
        printf("%lld\n", d);
    }
    return 0;
}
