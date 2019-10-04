#include<bits/stdc++.h>
using namespace std;
#define Max 1000005
#define lolo long long int
lolo stat[Max];
lolo dp[Max];
lolo sod[Max];

void sieve()
{
    lolo i, j, sq;
    stat[0]=stat[1]=1;
    for(i=4; i<=Max; i+=2) stat[i]=1;
    sq = sqrt(Max);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i]==0)
        {
            for(j=2*i; j<=Max; j+=i)
                stat[j]=1;
        }
    }
}

lolo digicheck(lolo i)
{
    lolo rem, sum=0;
    while(i!=0)
    {
        rem = i%10;
        sum+=rem;
        i = i/10;
    }
    return sum;
}

void digitprime()
{
    lolo x, y;
    dp[0]=dp[1]=1;
    dp[2]=0;
    for(y=3; y<=Max; y++)
    {
        if(stat[y]==0)
        {
            x = digicheck(y);
            if(stat[x]==0)
                dp[y]=0;
            else dp[y]=1;
        }
        else
            dp[y]=1;
    }
}

void sumofdigits()
{
    lolo count, i;
    sod[0]=sod[1]=0;
    sod[2]=count=1;
    for(i=3; i<=Max; i++)
    {
        if(dp[i]==0)
        {
            count++;
            sod[i]=count;
        }
        else sod[i] = count;
    }
}

int main()
{
     lolo t, a, b;
    sieve();
    digitprime();
    sumofdigits();
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld", &a, &b);
        if(a>b)
            swap(a,b);
        printf("%lld\n", sod[b] - sod[a-1]);
    }
    return 0;
}
