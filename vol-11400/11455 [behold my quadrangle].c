#include<stdio.h>
int main()
{
    long long int a, b, c, d, i, j, k, n;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
        if( ((a+b+c)<=d) || ((a+b+d)<=c) || ((a+d+c)<=b) || ((d+b+c)<=a) )
        {
            printf("banana\n");
        }
        else
        {
            if((a==b)&&(b==c)&&(c==d)&&(d==a))
            {
                printf("square\n");
            }
            else if( ((a==b)&&(c==d)) || ((a==d)&&(c==b)) || ((a==c)&&(b==d)) )
            {
                printf("rectangle\n");
            }
            else
            {
                printf("quadrangle\n");
            }
        }
    }
    return 0;
}
