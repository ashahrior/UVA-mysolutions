#include<stdio.h>
int main()
{
    long long int a, b, c, s, t;
    scanf("%lld", &t);
    for(s=1; s<=t; s++)
    {
        scanf("%lld%lld", &a, &b);
        c=(a/3)*(b/3);
        printf("%lld\n",c);
    }
    return 0;
}
