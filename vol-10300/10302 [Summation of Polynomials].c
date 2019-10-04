#include<stdio.h>
int main()
{
    long long int n, i, x, sum;
    while(scanf("%lld", &n)==1)
    {
        sum = 0;
        for(i=1; i<=n; i++)
        {
            x=i;
            x = x*x*x;
            sum = sum + x;
        }
        printf("%.lld\n", sum);
    }
    return 0;
}
