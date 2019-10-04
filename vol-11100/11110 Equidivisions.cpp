#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

int n;
int grid[105][105];

void dfs(int x, int y, int num)
{
    if(x<0 || y<0 || x==n || y==n || grid[x][y]==-1 || grid[x][y]!=num)
        return;
    grid[x][y] = -1;
    dfs(x,y-1,num);
    dfs(x,y+1,num);
    dfs(x+1,y,num);
    dfs(x-1,y,num);
    return;
}

void create_table()
{
    for(int i = 1; i<n; i++)
    {
        string str;
        getline(cin,str);
        stringstream ss(str);
        int x, y;
        while(ss>>x>>y)
        {
            grid[x-1][y-1] = i;
        }
    }

    return;
}

int main()
{
    while(cin>>n)
    {
        if(!n)
            break;

        memset(grid,0,sizeof(grid));
        getchar();
        create_table();
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(grid[i][j]!=-1)
                {
                    cnt++;
                    int num = grid[i][j];
                    dfs(i,j,num);
                }
            }
        }

        if(cnt==n)
            cout<< "good"<<endl;
        else cout<< "wrong" <<endl;
    }

    return 0;
}

/**
Sample Input
2
1 2 2 1
5
1 1 1 2 1 3 3 2 2 2
2 1 4 2 4 1 5 1 3 1
4 5 5 2 5 3 5 5 5 4
2 5 3 4 3 5 4 3 4 4
5
1 1 1 2 1 3 3 2 2 2
2 1 3 1 4 1 5 1 4 2
4 5 5 2 5 3 5 5 5 4
2 4 1 4 3 5 4 3 4 4
0
Sample Output
wrong
good
wrong
*/
