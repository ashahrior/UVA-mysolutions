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
int main()
{
    lolo n, m, r, t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        r = n+m;
        r = r*(r+1);
        r/=2;
        lolo ans = r+n+1;
        cout<<ans<<endl;
    }
    return 0;
}
