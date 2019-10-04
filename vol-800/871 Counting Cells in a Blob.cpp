#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

vector <string> grid;
int sz, B;
int countt, MX;

void show_grid()
{
    cout<<countt<<endl;
    for(int i = 0; i<sz; i++)
        cout<<grid[i]<<endl;
    cout<<endl;
}

void dfs(int x, int y)
{
    if(x<0 || y<0 || x==sz || y==B || grid[x][y]=='0')
        return;

    countt++;
    grid[x][y] = '0';
    //show_grid();
    //getchar();
    dfs(x, y+1);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x+1, y+1);
    dfs(x+1, y-1);
    dfs(x-1, y+1);
    dfs(x-1, y-1);
}

void set_state()
{
    sz = grid.size();
    B = grid[0].size();
    countt = MX = 0;
    return;
}

void counter()
{
    for(int i = 0; i<sz; i++)
    {
        for(int j = 0; j<B; j++)
        {
            if(grid[i][j]=='1')
            {
                dfs(i,j);
                MX = max(MX,countt);
                countt = 0;
            }
        }
    }
    cout<<MX<<endl;
}

int main()
{
    int t;
    cin>>t;
    getchar();
    getchar();
    while(t--)
    {
        string str;
        while(getline(cin,str))
        {
            if(str[0]!='0' && str[0]!='1')
                break;
            grid.push_back(str);
        }

        set_state();
        counter();
        grid.clear();

        if(t>0)
            cout<<endl;
    }
    return 0;
}

/**
Sample Input
3

11000
01100
00101
10001
01011

10001
01100
10101
10001
01011

10001
00100
10101
10101
01010

Sample Output
5

7

9
*/
