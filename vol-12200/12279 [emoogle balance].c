#include<stdio.h>
int main()
{
    long long int c=0, i, n, t, sum;
    while(scanf("%lld", &t)==1 && t!=0)
    {
        sum=0;
        for(i=1; i<=t; i++)
        {
            scanf("%lld", &n);
            if(n>0)
            {
                sum++;
            }
            else
            {
                sum--;
            }
        }
        c++;
        printf("Case %lld: %lld\n",c,sum);
    }
    return 0;
}
