#include<stdio.h>
int main()
{
    int c[10000];
    int i, j, k, l, n, max;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        max = 0;
        scanf("%d", &j);
        for(k=0; k<j; k++)
        {
            scanf("%d", &c[k]);
            if(max<c[k])
            {
                max = c[k];
            }
        }
        printf("Case %d: %d\n", i, max);
    }
    return 0;
}
