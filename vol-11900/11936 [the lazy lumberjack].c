#include<stdio.h>
int main()
{
    long long int a, b, c, i, n;
    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld%lld", &a, &b, &c);
        if( ((a+b)>c) && ((a+c)>b) && ((b+c)>a) )
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
