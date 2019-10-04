#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define mset(a) memset(a,-1,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl getline

#define SIZE 10000000

vector <lolo> lizt, primes;
lolo listsize, plim;
void prime_factor(lolo n);
bool stat[SIZE];

lolo sieve()
{
    lolo i, j, sq;
    sq = sqrt(SIZE);
    stat[0] = stat[1] = 1;
    for(i=4; i<SIZE; i+=2)
        stat[i] = 1;
    for(i=3; i<=sq; i+=2)
    {
        if(!stat[i])
        {
            for(j=i*i; j<SIZE; j+=i+i)
                stat[j]=1;
        }
    }
    primes.pb(2);
    for(i=3; i<SIZE; i+=2)
    {
        if(!stat[i])
            primes.pb(i);
    }
    return primes.size();
}

int main()
{
    plim = sieve();
    lolo num;
    while(sf("%lld",&num) && num!=-1)
    {
        lizt.clear();
        if(num==1)
        {
            cout<<1<<endl<<endl;
            continue;
        }
        prime_factor(num);
        listsize = lizt.size();
        for(lolo i=0; i<listsize; i++)
            pf("    %lld\n", lizt[i]);
        cout<<endl;
    }
    return 0;
}

void prime_factor(lolo n)
{
    lizt.clear();
    lolo i, j, sq = sqrt(n);
    for(i=0; i<plim && primes[i]<=sq; i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n = n/primes[i];
                lizt.pb(primes[i]);
            }
        }
    }
    if(n>1)
    {
        lizt.pb(n);
    }
}
