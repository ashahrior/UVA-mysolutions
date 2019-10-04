#include<stdio.h>
int main()
{
    long long int num, i, n, rem[64];
    while(scanf("%lld", &n)==1)
    {
        i=0;
        num = n;

        if(n==0)
        {
            printf("%lld\n", n);
        }
        else if(n<0)
        {
            break;
        }
        else
        {
            while(num!=0)
            {
                rem[i] = num % 3;
                i++;
                num = num / 3;
            }
            for(i--; i>=0; i--)
            {
                printf("%lld", rem[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
