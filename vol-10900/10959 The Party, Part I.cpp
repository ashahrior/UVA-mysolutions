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
#define I_INF INT_MAX
#define L_INF LONG_LONG_MAX

int main()
{
    int t;
    cin>>t;
    bool flag = 0;
    while(t--)
    {
        if(flag)
            cout<<endl;
        flag = 1;
        int n, l;
        cin>>n>>l;
        vector <int> v[n+2];
        for(int i = 0; i<l; i++)
        {
            int x, y;
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        queue <int> q;
        int dis[n+2];
        mset(dis,-1);
        q.push(0);
        dis[0] = 0;
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            int sz = v[u].size();
            for(int i = 0; i<sz; i++)
            {
                int x = v[u][i];
                if(dis[x]==-1)
                {
                    dis[x] = dis[u]+1;
                    q.push(x);
                }
            }
        }
        for(int i = 1; i<n; i++)
            cout<<dis[i]<<endl;
    }
}

/**
Sample Input
2

5 6
0 1
0 2
3 2
2 4
4 3
1 2

5 6
0 1
0 2
3 2
2 4
4 3
1 2
Sample Output
1
1
2
2

1
1
2
2
*/
