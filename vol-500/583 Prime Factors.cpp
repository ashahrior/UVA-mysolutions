#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
#define maxx 1000000
lolo flist[maxx];
lolo primes[maxx];
lolo stat[maxx];
lolo listsize;

void primefactorize(lolo n)
{
    lolo i, sqrtn;
    listsize = 0;
    sqrtn = sqrt(n);
    for(i=0; primes[i]<=sqrtn; i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                flist[listsize] = primes[i];
                listsize++;
            }
        }
    }
    if(n>1)
    {
        flist[listsize] = n;
        listsize++;
    }
}

int main()
{
    lolo n, num, x, i, j, sq;

    stat[0] = stat[1] = 1; /// sieve starts here
    for(i=4; i<=maxx; i+=2) stat[i]=1;
    sq = sqrt(maxx);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i]==0)
        {
            for(j=i*i; j<=maxx; j+=2*i)
                stat[j]=1;
        }
    }

    j=0;                    /// prime listing starts here
    for(i=0; i<=maxx; i++)
    {
        if(stat[i]==0)
        {
            primes[j++] = i;
        }
    }
    /// pre-calculation ends
    while(scanf("%lld",&num)==1 && num)
    {
        if(num<0)
        {
            n = num*(-1);
        }
        else
            n = num;
        primefactorize(n);
        if(num<0)
            printf("%d = -1 x ",num);
        else
            printf("%d = ",num);
        for(x=0; x<listsize; x++)
        {
            printf("%lld",flist[x]);
            if(x<listsize-1)
                printf(" x ");
        }
        printf("\n");
    }
    return 0;
}
