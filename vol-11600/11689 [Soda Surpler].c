#include<stdio.h>
int main()
{
    long long int e, f, c, i, t, d, n, sum, rem;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        sum = 0;
        scanf("%lld%lld%lld", &e, &f, &c);
        n = e+f;
        {
            while(n>0)
            {
                d = n / c;
                sum = sum + d;
                if(d<1)
                {
                    break;
                }
                rem=n%c;
                n=d + rem ;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}

