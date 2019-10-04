#include<stdio.h>
#include<algorithm>
using namespace std;
long long int ara[100000];
int main()
{
    long long int a, b, n, i, j, mini, price;
    while(scanf("%lld",&n)==1)
    {
        for(i=0; i<n; i++)
            scanf("%lld",&ara[i]);
        sort(ara,ara+i);
        scanf("%lld",&price);
        mini= 2000000;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(ara[i]+ara[j]==price &&i!=j)
                {
                    if(ara[i]<ara[j])
                    {
                        if(ara[j]-ara[i]<mini)
                        {
                            a = ara[i];
                            b = ara[j];
                            mini = ara[j] - ara[i];
                        }
                    }
                    else
                    {
                        if(ara[i]-ara[j]<mini)
                        {
                            a = ara[j];
                            b = ara[i];
                            mini = ara[i] - ara[j];
                        }
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n", a, b);
    }
    return 0;
}
