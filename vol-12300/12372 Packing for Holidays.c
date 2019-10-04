#include<stdio.h>
int main()
{
    long long int n, a, b, c, i;
    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld%lld", &a, &b, &c);
        if(a<=20 && b<=20 && c<=20)
        {
            printf("Case %lld: good\n", i);
        }
        else
        {
            printf("Case %lld: bad\n", i);
        }
    }
    return 0;
}
