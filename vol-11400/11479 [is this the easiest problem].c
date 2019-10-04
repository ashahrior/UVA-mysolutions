#include<stdio.h>
int main()
{
    long long int t, a, b, c, i;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld%lld", &a, &b, &c);
        if((a+b<=c)||(a+c<=b)||(b+c<=a)|| a == 0 || b == 0 || c == 0)
        {
            printf("Case %lld: Invalid\n", i);
        }
        else if((a==b && a!=c && b!=c) || (a==c && a!=b && c!=b) || (b==c && b!=a && c!=a))
        {
            printf("Case %lld: Isosceles\n", i);
        }
        else if(a==b && a==c && b==c)
        {
            printf("Case %lld: Equilateral\n", i);
        }
        else
        {
            printf("Case %lld: Scalene\n", i);
        }
    }
    return 0;
}
