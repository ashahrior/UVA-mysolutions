#include<stdio.h>
int main()
{
    long long int g[40];
    long long int t, n, p, q, i,j, sum, count;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        count=0;
        scanf("%lld%lld%lld",&n, &p, &q);
        for(j=0; j<n; j++)
        {
            scanf("%lld",&g[j]);
        }
        if(p>n)
        {
            p=n;
        }
        for(j=0; j<p; j++)
        {
            sum = sum + g[j];
            if(sum>q)
            {
                break;
            }
            else
            {
                count++;
            }
        }
        printf("Case %lld: %lld\n", i, count);
    }
    return 0;
}
