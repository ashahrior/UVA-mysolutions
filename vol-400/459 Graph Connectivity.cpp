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
vector <int> adj[30];
bool vis[30];
void dfs(int node);
int main()
{
    //read();
    int t, i, n;
    cin>>t;
    getchar();
    while(t--)
    {
        char str[3];
        string big;
        cin>>big;
        n = big[0] - 'A';
        for(i=0; i<=n; i++)
            adj[i].clear();
        mclr(vis);
        getchar();
        while(gets(str) && str[0])
        {
            adj[str[0]-'A'].pb(str[1]-'A');
            adj[str[1]-'A'].pb(str[0]-'A');
        }
        int count=0;
        for(i=0; i<=n; i++)
        {
            if(!vis[i])
                dfs(i), count++;
        }
        cout<<count<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}
void dfs(int node)
{
    vis[node] = 1;
    int i, v, sz = adj[node].size();
    for(i=0; i<sz; i++)
    {
        v = adj[node][i];
        if(!vis[v])
            dfs(v);
    }
    return;
}
