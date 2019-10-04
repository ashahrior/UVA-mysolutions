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

#define mod 1000000007
lolo bigmod(lolo base, lolo power)
{
    lolo c;
    if(power==0)
        return 1;
    if(power&1)
        return ( (base%mod) * ( bigmod(base, power-1) ) )%mod;
    else
    {
        c = bigmod(base, power/2);
        return (c*c)%mod;
    }
}
int main()
{
    lolo t, c=1,n, p;
    sf("%lld",&t);
    while(t--)
    {
        sf("%lld", &n);
        p = n-1;
        lolo result = bigmod(2,p);
        pf("Case #%lld: %lld\n",c++, (n*result)%mod);
    }
    return 0;
}

/**
Sample Input
3
1
2
3
Sample Output
Case #1: 1
Case #2: 4
Case #3: 12

**/
