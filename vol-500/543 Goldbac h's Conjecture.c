#include<stdio.h>
#include<math.h>
#define M 10000000
long long int stat[M];
int sieve()
{
    long long int i, j, sq;
    for(i=2; i<=M; i++) stat[i] = 0;
    for(i=4; i<=M; i+=2) stat[i] = 1;
    sq = sqrt(M);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i]==0)
        {
            for(j=2*i; j<=M; j+=i)
                stat[j]=1;
        }
    }
    stat[1]=1;
}
int main()
{
    long long int n, m, p, w=0;
    sieve();
    while(scanf("%lld", &n)==1 && n)
    {
        w=0;
        for(m=3; m<=n/2; m++)
        {
            if(stat[m]==0)
            {
                p = n-m;
                if(stat[p]==0)
                {
                    printf("%lld = %lld + %lld\n", n, m, p);
                    w++;
                    break;
                }
            }
        }
        if(w==0)
        {
            printf("Goldbach's conjecture is wrong.\n");
        }
    }
    return 0;
}
