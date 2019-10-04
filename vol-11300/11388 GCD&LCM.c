#include<stdio.h>
int main()
{
    long long int a, b, i, g, l, n;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld",&g,&l);
        if(l%g==0)
        {
            a=g;
            b=l;
            printf("%lld %lld\n", a, b);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
