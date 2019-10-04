#include<stdio.h>
int main()
{
    int test, i, a, b, c, d, e, f, n, x, y;
    scanf("%d", &test);
    for(i=0; i<test; i++)
    {
        scanf("%d", &a);
        b=a*567;
        c=b/9;
        d=c+7492;
        e=d*235;
        f=e/47;
        n=f-498;
        x=n/10;
        y=x%10;
        if(y<0) printf("%d\n", y*(-1));
        else printf("%d\n", y);
    }
    return 0;
}
