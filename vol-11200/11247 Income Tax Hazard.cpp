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

int main()
{
    lolo m, x, r, ans;
    while(cin>>m>>x)
    {
        if(!m && !x)
            break;
        if( x==100 || x==0 || m==0 )
        {
            cout<< "Not found"<<endl;
            continue;
        }
        ans = (100*(m-1))/(100-x);
        r = (100*(m-1))%(100-x);
        if(!r)
            ans--;
        if(ans<m)
            cout<< "Not found\n";
        else cout<<ans<<endl;
    }
    return 0;
}
