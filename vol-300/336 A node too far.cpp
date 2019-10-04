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

#define zz 100000
vector <lolo> v[zz+1];

lolo bfs(lolo ss, lolo tt)             ///  Rank: 3186
{
    queue <lolo> q;
    bool vis[zz+1];
    lolo dis[zz+1], i;
    mset(vis,0),mset(dis,0);
    q.push(ss);
    vis[ss] = 1;
    lolo u, w;
    lolo countt=0;
    while(!q.empty())
    {
        u = q.front(), q.pop();
        if(dis[u]<=tt && dis[u])
            countt++;
        //pf("dis[%d] = %d count = %d \n", u, dis[u], countt);
        for(i=0; i<v[u].size(); i++)
        {
            w = v[u][i];
            if(!vis[w])
            {
                vis[w] = 1;
                dis[w] = dis[u] + 1;
                q.push(w);
            }
        }
    }
    return countt;
}

int main()
{
    lolo n;
    lolo cs=0;
    while(cin>>n)
    {
        if(!n)
            break;
        set <lolo> st;
        st.clear();
        lolo i, x, y;
        for(i=0; i<zz+1; i++)
            v[i].clear();
        for(i=0; i<n; i++)
        {
            cin>>x>>y;
            st.insert(x), st.insert(y);
            v[x].pb(y);
            v[y].pb(x);
        }
        lolo ss, tt;
        while(cin>>ss>>tt)
        {
            if(!ss && !tt)
                break;
            lolo count = st.size() - 1 ;
            lolo val = bfs(ss,tt);
            lolo r = count - val;
            //cout<<count<< " "<< val<< " "<<r<<endl;
            pf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n", ++cs, r, ss, tt);
        }
    }
    return 0;
}


/**
16
10 15  15 20  20 25  10 30  30 47  47 50  25 45  45 65
15 35  35 55  20 40  50 55  35 40  55 60  40 60  60 65
35 2   35 3   0 0
14
1 2  2 7  1 3  3 4  3 5  5 10  5 11
4 6  7 6  7 8  7 9  8 9  8 6  6 11
1 1  1 2  3 2  3 3  0 0
0

*/
