#include<stdio.h>
int main()
{
    int a, b, c, d, e, t, a1, b1, c1, d1, e1, sum;
    while(scanf("%d",&t)==1)
    {
        sum=0;
        a1=0, b1=0, c1=0, d1=0, e1=0;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        if(a==t)
        {
            a1++;
        }
        if(b==t)
        {
            b1++;
        }
        if(c==t)
        {
            c1++;
        }
        if(d==t)
        {
            d1++;
        }
        if(e==t)
        {
            e1++;
        }
        sum = a1 + b1 + c1 + d1 + e1;
        printf("%d\n",sum);
    }
    return 0;
}
