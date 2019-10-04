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

int row, col;
bool bomb[1002][1002];
int x2, y2;

int bfs(int cx, int cy)
{
    int dis[row+2][col+2];
    bool vis[row+2][col+2];
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};
    mset(vis,0);
    for(int i = 0; i<row; i++)
        for(int j = 0; j<col; j++)
            dis[i][j] = I_INF;
    vis[cx][cy] = 1;
    dis[cx][cy] = 0;
    queue < pair<int,int> > q;
    q.push(make_pair(cx,cy));
    while(!q.empty())
    {
        int xx= q.front().first;
        int yy = q.front().second;
        q.pop();
        for(int i = 0; i<4; i++)
        {
            int m = xx + dx[i];
            int n = yy + dy[i];
            if(m>-1 && m<row && n>-1 && n<col && !bomb[m][n] && !vis[m][n])
            {
                dis[m][n] = min(dis[m][n], dis[xx][yy]+1);
                vis[m][n] = 1;
                q.push(make_pair(m,n));
            }
        }
    }
    return dis[x2][y2];
}

int main()
{
    while(cin>>row>>col)
    {
        if(!row && !col)
            break;
        mset(bomb,0);
        int n;
        cin>>n;
        for(int i = 0; i<n; i++)
        {
            int x, b;
            cin>>x>>b;
            for(int j = 0; j<b; j++)
            {
                int y;
                cin>>y;
                bomb[x][y] = 1;
            }
        }
        int x1, y1;
        cin>>x1>>y1;
        cin>>x2>>y2;
        int tm = bfs(x1, y1);
        cout<<tm<<endl;
    }
    return 0;
}

/**
Sample Input
10 10
9
0 1 2
1 1 2
2 2 2 9
3 2 1 7
5 3 3 6 9
6 4 0 1 2 7
7 3 0 3 8
8 2 7 9
9 3 2 3 4
0 0
9 9
0 0
Sample Output
18
*/
