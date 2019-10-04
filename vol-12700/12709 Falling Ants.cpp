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

int main()
{
    //read();
    //write();
    int t, i, maxi, vol;
    while(cin>>t &&t)
    {
        int h, w, l;
        maxi=vol=0;
        for(i=0; i<t; i++)
        {
            cin>>l>>w>>h;
            if(h>maxi)
            {
                maxi = h;
                vol = l*h*w;
            }
            else if(h==maxi)
            {
                vol = max(vol,l*w*h);
            }
        }
        cout<<vol<<endl;
    }
    return 0;
}
