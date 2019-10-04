#include<bits/stdc++.h> // accepted
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
int n, mapp[300][300], color[300], vis[300];
void setcolor(int cur, int col)
{
    int i;
    color[cur] = col;
    vis[cur] = 1;
    for(i=0; i<n; i++)
    {
        if(!vis[i] && mapp[cur][i])
            setcolor(i,1-col);
    }
}
bool bicolor()
{
    int i, j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(mapp[i][j] && color[i]==color[j])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    //read();
    while(cin>>n &&n)
    {
        mclr(vis);
        mclr(color);
        mclr(mapp);
        int e, x, y;
        cin>>e;
        for(int i=0; i<e; i++)
        {
            cin>>x>>y;
            mapp[x][y] = mapp[y][x] = 1;
        }
        setcolor(0,0);
        bool flag = bicolor();
        if(flag)
            cout<< "BICOLORABLE.\n";
        else cout<< "NOT BICOLORABLE.\n";
    }
    return 0;
}
