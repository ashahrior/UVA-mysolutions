#include<stdio.h>
int main()
{
    int t, n, ara[1000], dif, count, j, a, b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d%d",&a,&b);
            dif = a-b;
            if(dif<0)
                dif= dif*(-1);
            ara[j] = dif;
        }
        count=0;
        for(j=0; j<n-1; j++)
        {
            if(ara[j] != ara[j+1])
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("yes\n");
        else
            printf("no\n");
        if(t)
            printf("\n");
    }
    return 0;
}
