#include<bits/stdc++.h> /// accepted
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

int i, j, u, x;
vector <int> v[300];
int color[300];

bool colorcheck()
{
    mset(color);
    color[0] = 0;
    queue <int> q;
    bool flag = true;
    q.push(0);
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(i=0; i<v[u].size(); i++)
        {
            x = v[u][i];
            if(color[x]==-1)
            {
                if(color[u])
                    color[x] = 0;
                else color[x] = 1;
                q.push(x);
            }
            else
            {
                if(color[u]==color[x])
                {
                    flag = false;
                    break;
                }
            }
        }
        if(flag==false)
            break;
    }
    return flag;
}

int main()
{
    //read();
    int n, e, x, y;
    while(cin>>n &&n)
    {
        cin>>e;
        for(i=0; i<n; i++)
            v[i].clear();
        for(i=0; i<e; i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        bool r = colorcheck();
        if(r==true)
            cout<< "BICOLORABLE.\n";
        else cout<< "NOT BICOLORABLE.\n";
    }
    return 0;
}
