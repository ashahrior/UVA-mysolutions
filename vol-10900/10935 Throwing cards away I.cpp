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
    //read();
    //write();
    deque <int> dq;
    vector<int> v;
    int i, j, u, n;
    while(cin>>n &&n)
    {
        dq.clear();
        v.clear();
        if(n==1)
        {
            cout<< "Discarded cards:\n";
            cout<< "Remaining card: 1\n";
            continue;
        }
        if(n==2)
        {
            cout<< "Discarded cards: 1\n";
            cout<< "Remaining card: 2\n";
            continue;
        }
        for(i=1; i<=n; i++)
            dq.push_back(i);
        while(dq.size()!=2)
        {
            v.pb(dq.front());
            dq.pop_front();
            u = dq.front();
            dq.pop_front();
            dq.pb(u);
        }
        v.pb(dq.front());
        pf("Discarded cards: ");
        int sz = v.size();
        for(i=0; i<sz; i++)
        {
            cout<<v[i];
            if(i<sz-1)
                pf(", ");
        }
        cout<<endl;
        pf("Remaining card: %d\n",u);
    }
    return 0;
}
