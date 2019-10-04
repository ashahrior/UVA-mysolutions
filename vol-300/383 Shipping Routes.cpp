#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

int vertex, edges, ship;
vector <int> roads[1001];

int bfs(int start, int des) {
    queue <int> q;
    bool vis[vertex+1];
    int dis[vertex+1];
    mset(vis,0), mset(dis,0);
    q.push(start);
    vis[start] = 1;
    int u, v;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        if(u==des)
            return dis[des];
        int i, sz = roads[u].size();
        for(i=0; i<sz; i++)
        {
            v = roads[u][i];
            if(!vis[v])
            {
                vis[v] = 1;
                dis[v] = dis[u] + 1;
                q.push(v);
            }
        }
    }
    return 0;
}

int main()
{
    read();
    int i, t, c=0;
    cin>>t;
    cout<< "SHIPPING ROUTES OUTPUT\n";
    while(t--)
    {
        cin>>vertex>>edges>>ship;
        map <string,int> mp;
        mp.clear();
        string s, r;
        cout<< "\nDATA SET  " << ++c <<endl<<endl;
        for(i=0; i<vertex; i++)
        {
            cin>>s;
            mp[s] = i+1;
        }
        for(i=0; i<1001; i++)
            roads[i].clear();
        for(i=0; i<edges; i++)
        {
            cin>>s>>r;
            roads[mp[s]].pb(mp[r]);
            roads[mp[r]].pb(mp[s]);
        }
        int cost[ship+1], costs[ship+1];
        mset(cost,0) , mset(costs,0);
        for(i=0; i<ship; i++)
        {
            cin>>cost[i]>>s>>r;
            int start = mp[s], des = mp[r];
            costs[i] = bfs(start,des);
        }
        //cout<<endl;
        for(i=0; i<ship; i++)
        {
            if(!costs[i])
                cout<< "NO SHIPMENT POSSIBLE\n";
            else
                pf("$%d\n", cost[i]*100*costs[i]);
        }
    }
    cout<< "\nEND OF OUTPUT\n";
    return 0;
}
