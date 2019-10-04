#include<stdio.h>
int main()
{
    int ara[55];
    int a, b, n, l, i, j, t, s;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &l);
        for(j=0; j<l; j++)
        {
            scanf("%d", &ara[j]);
        }
        s = 0;
        for(a=1; a<l; a++)
        {
            for(b=l-1; b>=a; b--)
            {
                if(ara[b-1]>ara[b])
                {
                    t = ara[b-1];
                    ara[b-1] = ara[b];
                    ara[b] = t;
                    s++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", s);
    }
    return 0;
}
