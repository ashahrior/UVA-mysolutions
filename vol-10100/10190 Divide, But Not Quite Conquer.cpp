#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
#define pb push_back
int main()
{
    lolo n, m, x, r, i, sz;
    vector <int> v;
    while(cin>>n>>m)
    {
        v.clear();
        if(n<2 || m<2 || m>n)
        {
            cout<< "Boring!"<<endl;
            continue;
        }
        bool flag = true;
        x = n;
        while(x>1)
        {
            r = x%m;
            if(r==0)
                v.pb(x);
            else
                flag = false;
            x = x/m;
        }
        v.pb(1);
        if(!flag)
            cout<< "Boring!"<<endl;
        else
        {
            sz = v.size();
            for(i=0; i<sz; i++)
            {
                cout<<v[i];
                if(i<sz-1)
                    cout<<char(32);
            }
            cout<<endl;
        }
    }
}
