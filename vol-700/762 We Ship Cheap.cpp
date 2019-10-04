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

int main()
{
    //read();
    int n, ln=0;
    while(cin>>n)
    {
        int l = n, i, k=1;
        map <string, int> mark;
        map <int, string> point;
        string s, d, x, y, a1[l+1], a2[l+1];
        for(i=0; i<l; i++)
        {
            cin>>x>>y;
            a1[i] = x, a2[i] = y;
            if(!mark[x])
            {
                mark[x] = k;
                point[k] = x;
                k++;
            }
            if(!mark[y])
            {
                mark[y] = k;
                point[k] = y;
                k++;
            }
        }
        cin>>s>>d;

        if(ln)
            cout<<endl;
        ln = 1;
        if(!mark[s] || !mark[d])
        {
            cout<< "No route\n";
            continue;
        }
        int start = mark[s] , des = mark[d];
        vector <int> roads[k+5];
        for(i=0; i<l; i++)
        {
            x = a1[i], y = a2[i];
            roads[mark[x]].pb(mark[y]);
            roads[mark[y]].pb(mark[x]);
        }
        bool vis[k+5], found=0;         // bfs starts here
        int path[k+5];
        mset(vis,0), mset(path,0);
        queue <int> q;
        q.push(des);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            int sz = roads[u].size();
            for(i=0; i<sz; i++)
            {
                int v = roads[u][i];
                if(!vis[v])
                {
                    path[v] = u;
                    if(v==start)
                    {
                        found = 1;
                        break;
                    }
                    vis[v] = 1;
                    q.push(v);
                }
            }
            if(found)
                break;
        }
        if(!path[start])
            cout<< "No route\n";
        else
        {
            while(start!=des)
            {
                cout<< point[start] << " "<< point[path[start]]<<endl;
                start = path[start];
            }
        }
    }
    return 0;
}

/*
Sample input

3
JV PT
KA PT
KA HP
JV HP

2
JV PT
KA HP
JV HP


Sample output

JV PT
PT KA
KA HP

No route
*/
