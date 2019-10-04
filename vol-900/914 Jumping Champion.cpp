#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)

#define M 1000005
bool stat[M];
lolo dif[1000];
vector <lolo> primes;
set <lolo> val;
lolo jc;
void sieve()
{
    lolo i, j, sq;
    stat[0]=stat[1]=1;
    for(i=4; i<=M; i+=2) stat[i] = 1;
    sq = sqrt(M);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i]==0)
        {
            for(j=i*i; j<=M; j+=i+i)
                stat[j]=1;
        }
    }
    primes.pb(2);
    for(i=3; i<=M; i+=2)
    {
        if(!stat[i])
            primes.pb(i);
    }
    return;
}
bool jump_champ(lolo index, lolo hi)
{
    lolo i = index, d, f=0, x=0;
    bool flag=0;
    mset(dif,0);

    for(i++; primes[i]<=hi; i++)
    {
        d = primes[i] - primes[i-1];
        dif[d]++;
        if(dif[d]>f)
        {
            jc = d, f = dif[d];
            val.clear();
        }
        if(dif[d]==f)
        {
            val.insert(d);
        }
    }
    if(val.size()==0 || val.size()>1)
        return 0;
    else return 1;
}
int main()
{
    //read();
    sieve();
    lolo t, k, l, r, i;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(l>r) swap(l,r);
        val.clear();
        jc = 0;
        for(i=0 ; ; i++)
        {
            if(primes[i]>=l)
            {
                k = i;
                break;
            }
        }
        bool champ = jump_champ(i,r);
        if(champ)
        {
            pf("The jumping champion is %lld\n", jc);
        }
        else pf("No jumping champion\n");
    }
    return 0;
}

/**
Sample Input
3
2 11
2 5
30 50
Sample Output
The jumping champion is 2
No jumping champion
The jumping champion is 4
*/
