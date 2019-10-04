#include<stdio.h>
int main()
{
    long long int d, D, s, g, m, i;
    while(scanf("%lld%lld",&s, &D)==2)
    {
        i=1;
        d=s;
        while(d<D)
        {
            while(i<=d)
                i++;
            s++;
            d= d+s;
        }
        printf("%lld\n",s);
    }
    return 0;
}
