#include<stdio.h>
#include<math.h>
int stat[10005];
int sieve(int num)
{
    int j, k, sqz;
    for(j=2; j<=num; j++) stat[j] = 0;
    for(j= 4; j<=num; j+=2) stat[j] = 1;
    sqz = sqrt(num);
    for(j= 3; j<=sqz; j+=2)
    {
        if(stat[j]==0)
        {
            for(k=j+j; k<=num; k+=j)
                stat[k] = 1;
        }
    }
    stat[1] = 1;
}

int main()
{
    int t, n, x, y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sieve(n);
        for(x=2; x<=n; x++)
        {
            if(stat[x]==0 && x<n && 2*x>n)
            {
                printf("%d\n",x);
                break;
            }
        }
    }
    return 0;
}
