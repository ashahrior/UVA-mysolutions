#include<stdio.h>
int main()
{
    int t, n, p[15], i, j, r;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%d", &n);
        for(j=0; j<n; j++)
        {
            scanf("%d", &p[j]);
        }
        r = p[j/2];
        printf("Case %d: %d\n", i, r);
    }
    return 0;
}
