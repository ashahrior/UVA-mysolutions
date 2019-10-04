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

lolo bigmod(lolo base, lolo power, lolo mod)
{
    lolo c;
    if(power==0)
        return 1;
    if(power&1)
        return ( (base%mod) * ( bigmod(base, power-1, mod) ) )%mod;
    else
    {
        c = bigmod(base, power/2, mod);
        return (c*c)%mod;
    }
}
int main()
{
    lolo t, base, power, mod, result;
    while(sf("%lld", &t)==1)
    {
        if(!t)
            break;
        while(t--)
        {
            sf("%lld%lld%lld", &base, &power, &mod);
            result = bigmod(base,power,mod);
            pf("%lld\n", result);
        }
    }
    return 0;
}
