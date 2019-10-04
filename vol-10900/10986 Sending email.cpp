#include<bits/stdc++.h>     /// accepted
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
#define I_INF INT_MAX
#define L_INF LONG_LONG_MAX

int nodes, edges, start, endd;
vector < vector<int> > edge, cost;
vector <int> dis;

struct data
{
    int city, dist;
    data(int a, int b)
    {
        city = a, dist = b;
    }
    bool operator <(const data& p) const
    {
        return dist > p.dist;
    }
};

int main()
{
    int c;
    cin>>c;
    for(int cc = 1; cc<=c; cc++)
    {
        edge.clear();
        cost.clear();
        dis.clear();
        cin>>nodes>>edges>>start>>endd;
        edge.resize(nodes+1);
        cost.resize(nodes+1);
        dis.resize(nodes+1);
        for(int i = 0; i<edges; i++)
        {
            int x, y, z;
            cin>>x>>y>>z;
            edge[x].push_back(y);
            edge[y].push_back(x);
            cost[x].push_back(z);
            cost[y].push_back(z);
        }
        //DIJKSTRA(start);
        for(int i = 0; i<nodes; i++)
            dis[i] = I_INF;
        priority_queue <data> PQ;
        PQ.push(data(start,0));
        dis[start] = 0;
        while(!PQ.empty())
        {
            data T = PQ.top();
            PQ.pop();
            int u = T.city;
            if(T.dist != dis[T.city]) /// checking if the distance is minimum
            {
                continue;
            }
            int sz = edge[u].size();
            for(int i = 0; i<sz; i++)
            {
                int v = edge[u][i];
                if(dis[u] + cost[u][i] < dis[v])
                {
                    dis[v] = dis[u] + cost[u][i];
                    PQ.push(data(v,dis[v]));
                }
            }
        }
        printf("Case #%d: ", cc);
        if(dis[endd]==I_INF)
            cout<< "unreachable"<<endl;
        else cout<<dis[endd]<<endl;
    }
    return 0;
}

/*
void DIJKSTRA(int s)
{
    for(int i = 0; i<=nodes; i++)
        dis[i] = I_INF;
    priority_queue <data> PQ;
    PQ.push(data(s,0));
    dis[s] = 0;
    while(!PQ.empty())
    {
        data T = PQ.top();
        PQ.pop();
        int u = T.city;
        int sz = edge[u].size();
        for(int i = 0; i<sz; i++)
        {
            int v = edge[u][i];
            if(dis[u] + cost[u][i]<dis[v])
            {
                dis[v] = dis[u] + cost[u][i];
                PQ.push(data(v,dis[v]));
            }
        }
    }
}
*/

/**
Sample Input
3
2 1 0 1
0 1 100
3 3 2 0
0 1 100
0 2 200
1 2 50
2 0 0 1

Sample Output
Case #1: 100
Case #2: 150
Case #3: unreachable
*/
