#include<stdio.h>
int main()
{
    int n, i, c, t;
    t=0;
    while(scanf("%d", &n)==1 && n>=0)
    {
        i=1;
        c=0;
        if(n==0 || n==1)
        {
            t++;
            printf("Case %d: 0\n", t);
        }
        else
        {
        while(i<n)
        {
            i=i*2;
            if(i>=n)
            {
                break;
            }
            c++;
        }
        t++;
        printf("Case %d: %d\n", t, c+1);
        }
    }
    return 0;
}
