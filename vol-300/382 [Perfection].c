#include<stdio.h>
int main()
{
    long long int i, count, n, sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            sum = 0;
            for(i=1; i<=n/2; i++)
            {
                if(n%i==0)
                {
                    sum = sum + i;
                }
            }
            if(sum<n)
            {
                printf("%5lld  DEFICIENT\n", n);
            }
            else if(sum>n)
            {
                printf("%5lld  ABUNDANT\n", n);
            }
            else
            {
                printf("%5lld  PERFECT\n", n);
            }
        }
    }
    return 0;
}
