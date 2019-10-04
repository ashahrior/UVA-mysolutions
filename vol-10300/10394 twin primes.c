#include<stdio.h>
#include<math.h>
#define M 20000001
#define lolo long long int
lolo stat[M];
lolo twins[M];

void sieve()
{
    lolo i, j, k, sq;
    stat[0]=stat[1]=1;
    for(i=2; i<=M; i++) stat[i]=0;
    for(i=4; i<=M; i+=2) stat[i]=1;
    sq = sqrt(M);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i]==0)
        {
            for(j=2*i; j<=M; j+=i)
                stat[j]=1;
        }
    }
}

lolo twin()
{
    lolo x,y=1;
    for(x=3; x<M; x++)
    {
        if(stat[x]==0 && stat[x+2]==0)
        {
            twins[y++]=x;
        }
    }
}

int main()
{
    lolo num;
    sieve();
    twin();
    while(scanf("%lld",&num)==1)
    {
        printf("(%lld, %lld)\n", twins[num], twins[num]+2);
    }
    return 0;
}

/*
int main()
{
    lolo num, n, x, y, a, b;
    sieve();
    while(scanf("%lld",&num)==1)
    {
        n=num;
        if(num==1) printf("(3, 5)\n");
        else
        {
            n = n-1;
            a = 6*n-1, b = 6*n+1;
            if(stat[a]==0 && stat[b]==0)
            {
                printf("(%lld, %lld)\n",a,b);
            }
            else
            {
label:
                n++;
                a = 6*n-1, b = 6*n+1;
                if(stat[a]==0 && stat[b]==0)
                {
                    printf("(%lld, %lld)\n",a,b);
                }
                else
                    goto label;
            }
        }
    }
    return 0;
}
*/

