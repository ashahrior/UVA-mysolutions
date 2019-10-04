#include<stdio.h>
int main()
{
    long long int n, i;
    while(scanf("%lld", &n)==1)
    {
        if(n==0)
        {
            break;
        }
        if(n>=101)
        {
            i = n - 10;
        }
        else
        {
            i = 91;
        }
        printf("f91(%lld) = %lld\n", n, i);
    }
    return 0;
}
