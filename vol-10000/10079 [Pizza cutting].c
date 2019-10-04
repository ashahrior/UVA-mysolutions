#include<stdio.h>
int main()
{
    long long int n, i, sum, t;
    while(scanf("%lld", &n)==1)
    {
        i = 0, sum = 1;
        if(n<0)
        {
            break;
        }
        else
        {
        while(i<=n)
        {
            sum = sum + i;
            i++;
        }
        printf("%lld\n", sum);
        }
    }
    return 0;
}
