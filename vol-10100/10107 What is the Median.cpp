#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lolo unsigned long long int
int main()
{
    vector <lolo> v;
    lolo s=1, n, sz, pos, pos1, pos2, value;
    while(cin>>n)
    {
        v.pb(n);
        if(s==1)
        {
            cout<<n<<endl;
            s=0;
            continue;
        }
        sz = v.size();
        sort(v.begin(), v.end());
        if(sz%2==1)
        {
            pos = (sz/2);
            cout<<v[pos]<<endl;
        }
        else
        {
            pos1 = (sz/2);
            pos2 = pos1 - 1;
            value = (v[pos1]+v[pos2])/2;
            cout<<value<<endl;
        }
    }
    return 0;
}
