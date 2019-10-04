#include<stdio.h>
int main()
{
    unsigned long long n, m;
    while(scanf("%llu", &n)==1 && n!=0)
    {
        m = (n*10)/9;
        if(n%9==0)
        {
            printf("%llu %llu\n", m-1, m);
        }
        else
            printf("%llu\n", m);
    }
    return 0;
}
