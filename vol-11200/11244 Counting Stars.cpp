#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

int r, c, planet = 0, star = 0;
vector <string> sky;

void dfs(int x, int y)
{
    if(x<0 || y<0 || x==r || y==c || sky[x][y]=='.')
        return;
    sky[x][y] = '.';
    planet++;
    dfs(x, y+1);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x+1, y+1);
    dfs(x-1, y-1);
    dfs(x+1, y-1);
    dfs(x-1, y+1);
}

void space_ship()
{
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            planet = 0;
            if(sky[i][j]=='*')
            {
                dfs(i,j);
                if(planet==1)
                    star++;
            }
        }
    }
    cout<<star<<endl;
}

int main()
{
    while(cin>>r>>c)
    {
        star = 0;
        sky.clear();
        if(!r || !c)
            break;
        for(int i = 0; i<r; i++)
        {
            string str;
            cin>>str;
            sky.push_back(str);
        }
        space_ship();
    }
    return 0;
}

/**
Sample Input
5 5
.....
....*
....*
...*.
*....
4 3
...
.*.
...
*.*
0 0
Sample Output
1
3
*/
