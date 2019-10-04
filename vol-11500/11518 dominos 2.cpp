#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define SIZE 20000
vector <int> dom[SIZE];
int visit[SIZE], fall;
int dfs(int v)
{
    visit[v]=1;
    fall++;
    int sz = dom[v].size();
    for(int i=0; i<sz; i++)
    {
        int x = dom[v][i];
        if(!visit[x])
            dfs(x);
    }
}
int main()
{
    read();
    int n, m, l, t, i, x, y, v;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>l;
        mclr(dom);
        //dom.clear(); compiler error
        mclr(visit);
        fall=0;
        for(i=0; i<m; i++)
        {
            cin>>x>>y;
            dom[x].push_back(y);
        }
        for(i=0; i<l; i++)
        {
            cin>>v;
            if(!visit[v])
                dfs(v);
        }
        cout<<fall<<endl;
    }
    return 0;
}
