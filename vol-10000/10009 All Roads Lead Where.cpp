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
    int t, ln=0;
    cin>>t;
    while(t--)
    {
        int i, n, z;
        cin>>n>>z;
        set <string> st;
        string x[n+1] , y[n+1], a, b;
        map <string,int> mark;
        map <int, string> point;
        int k = 1;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            x[i] = a[0], y[i] = b[0];
            if(!mark[x[i]])
            {
                mark[x[i]] = k;
                point[k] = x[i];
                k++;
            }
            if(!mark[y[i]])
            {
                mark[y[i]] = k;
                point[k] = y[i];
                k++;
            }
        }
        vector <int> vec[k+2];
        int p, q;
        for(i=0; i<n; i++)
        {
            p = mark[x[i]] , q = mark[y[i]];
            vec[p].pb(q);
            vec[q].pb(p);
        }
        if(ln)
            cout<<endl;
        ln = 1;
        while(z--)
        {
            cin>>a>>b;
            string st="" , de="";
            st+=a[0] , de+=b[0];
            int start = mark[st] , des = mark[de];
            bool vis[k+2], found = 0;
            int path[k+2];
            mset(vis,0) , mset(path,0);
            queue<int> q;
            q.push(des);
            while(!q.empty())
            {
                int u = q.front();
                q.pop();
                int sz = vec[u].size();
                for(i=0; i<sz; i++)
                {
                    int v = vec[u][i];
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
            while(start!=des)
            {
                cout<<point[start];//<<point[path[start]];
                start = path[start];
            }
            cout<<point[start];
            cout<<endl;
        }
    }
    return 0;
}

/**
Sample Input
1

7 3
Rome Turin
Turin Venice
Turin Genoa
Rome Pisa
Pisa Florence
Venice Athens
Turin Milan
Turin Pisa
Milan Florence
Athens Genoa

Sample Output

TRP
MTRPF
AVTG
*/
