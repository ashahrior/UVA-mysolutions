#include<stdio.h>
int main()
{
    long long int r, i, n, x1, x2, x3, x4, y1, y2, y3, y4;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&r);
        x1 = -1 * 2.25 * r;
        x2 = 2.75 * r;
        x3 = 2.75 * r;
        x4 = -1* 2.25 * r;
        y1 = 1.5 * r;
        y2 = 1.5 * r;
        y3 = -1 * 1.5 * r;
        y4 = -1 * 1.5 * r;
        printf("Case %lld:\n",i);
        printf("%lld %lld\n", x1, y1);
        printf("%lld %lld\n", x2, y2);
        printf("%lld %lld\n", x3, y3);
        printf("%lld %lld\n", x4, y4);
    }
    return 0;
}
