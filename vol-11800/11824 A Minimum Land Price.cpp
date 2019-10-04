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
    lolo t, n, sz, p, i;
    cin>>t;
    while(t--)
    {
        vector <double> v;
        v.clear();
        while(cin>>n &&n)
        {
            v.pb(n);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        sz = v.size();
        p=1;
        double sum=0;
        for(i=0; i<sz; i++)
        {
            sum+= pow(v[i],p);
            p++;
        }
        sum*=2;
        if(sum>5000000)
            cout<< "Too expensive"<<endl;
        else
            pf("%.0lf\n", sum);
    }

    return 0;
}
