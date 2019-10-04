#include<stdio.h>
int main()
{
    int t, a, f, i, j, k, l, m, x;
    scanf("%d", &t);
    for(x=1; x<=t; x++)
    {
        scanf("%d", &a);
        scanf("%d", &f);
        for(i=1; i<=f; i++)
        {
            for(j=1; j<=a; j++)
            {
                for(l=1; l<=j; l++)
                {
                    printf("%d", j);
                }
                printf("\n");
            }
            for(k=a-1; k>=1; k--)
            {
                for(m=k; m>=1; m--)
                {
                    printf("%d", k);
                }
                printf("\n");
            }
            if(x<t || i!=f)
                printf("\n");
        }
    }
    return 0;
}
