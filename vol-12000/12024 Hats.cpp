#include<bits/stdc++.h>
using namespace std;
typedef long long lolo;
int main()
{
    ///freopen( "hats.txt", "r", stdin);
    lolo fact[13], x[13], i;
    x[2] = 1, x[3] = 2, x[4] = 9;
    fact[0] = 1, fact[1] = 1, fact[2] = 2, fact[3] = 6, fact[4] = 24;
    for(i=5; i<=12; i++)
        fact[i] = i*fact[i-1];
    for(i=5; i<=12; i++)
        x[i] = (i-1)*(x[i-1]+x[i-2]);
    lolo t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<x[n]<< "/" <<fact[n]<<endl;;
    }
    return 0;
}
