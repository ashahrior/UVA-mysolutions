#include<stdio.h>
int main()
{
    int i, j, t, n, ara[55], p, h, l;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%d", &ara[j]);
        }
        h=0, l=0;
        for(j=0; j<n-1; j++)
        {
            p = ara[j] - ara[j+1];
            if(p<0)
            {
                h++;
            }
            else if(p>0)
            {
                l++;
            }

        }
        printf("Case %d: %d %d\n", i, h, l);
    }
    return 0;
}
