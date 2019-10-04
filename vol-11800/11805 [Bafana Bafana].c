#include<stdio.h>
int main()
{
    int t, n, k, p, i, j, x;
    scanf("%d", &t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%d%d%d", &n, &k, &p);
        x=k;
        for(j=1; j<=p; j++)
        {
            x++;
            if(x==n)
            {
                if(j<p)
                {
                x = 0;
                }
            }
        }
        printf("Case %d: %d\n", i, x);
    }
    return 0;
}
