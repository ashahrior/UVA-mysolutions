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
LL bigmod(LL base, LL power, LL mod)
{
    if(power==0)
        return 1;
    if(power%2)
        return ( (base%mod) * ( bigmod(base, power-1, mod) ) )%mod;
    else
        return (bigmod(base, power/2, mod)%mod * bigmod(base, power/2, mod)%mod)%mod;
}
int main()
{
    //read();
    LL base, power, mod, result;
    while(cin>>base>>power>>mod)
    {
        result = bigmod(base, power, mod);
        cout<<result<<endl;
    }
    return 0;
}
