#include<stdio.h>
int main()
{
    long long int n, num, rem, sum, i;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            sum = 0;
            num = n;
            while(1)
            {
                rem = n % 10;
                sum = sum + rem;
                n = n / 10;
                if(sum>=10 && n==0)
                {
                    n = sum;
                    sum = 0;
                }
                if(sum<10 && n==0)
                {
                    break;
                }

            }
            printf("%lld\n", sum);
        }
    }
    return 0;
}
