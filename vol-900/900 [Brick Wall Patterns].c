#include<stdio.h>
int main()
{
    long long int ara[1000];
    long long int i, n, sum;
    while(scanf("%lld", &n)==1 &&n)
    {
        sum = 0;
        if(n<4)
        {
            printf("%lld\n", n);
        }
        else
        {
            i=0;
            ara[0] = 0;
            ara[1] = 1;
            while(i!=n)
            {
                sum = ara[0] + ara[1];
                ara[0] = ara[1];
                ara[1] = sum;
                i++;
            }
            printf("%lld\n", sum);
        }
    }
    return 0;
}
