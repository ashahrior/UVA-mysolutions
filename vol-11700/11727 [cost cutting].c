#include<stdio.h>
int main()
{
    int t, a, b, c, i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d%d", &a, &b, &c);
        if(a>b && a>c)
        {
            if(b>c)
                printf("Case %d: %d\n", i, b);
            else printf("Case %d: %d\n", i, c);
        }
        if(b>a && b>c)
        {
            if(a>c)
                printf("Case %d: %d\n", i, a);
            else printf("Case %d: %d\n", i, c);
        }
        if(c>a && c>b)
        {
            if(a>b)
                printf("Case %d: %d\n", i, a);
            else printf("Case %d: %d\n", i, b);
        }
    }
    return 0;
}
