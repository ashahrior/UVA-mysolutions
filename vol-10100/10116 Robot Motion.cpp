#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

int row, col, pos, count1, count2;
vector <string> grid;
int vis[15][15];
bool flag = 0;

void movement(int x, int y);

void robot(int x, int y)
{
    if(grid[x][y]=='N')
        movement(x-1,y);

    else if(grid[x][y]=='S')
        movement(x+1,y);

    else if(grid[x][y]=='E')
        movement(x,y+1);

    else if(grid[x][y]=='W')
        movement(x,y-1);

    return;
}

void movement(int x, int y)
{
    if(x<0 || y<0 || x==row || y==col)
        return;

    if(vis[x][y]>1)
        return;

    if(vis[x][y]==1)
    {
        flag = 1;
        count2++;
        vis[x][y]++;
        robot(x,y);
    }
    else if(!vis[x][y])
    {
        count1++;
        vis[x][y]++;
        robot(x,y);
    }

    return;
}

void verdict()
{
    if(flag)
    {
        int before = count1 - count2;
        int loop = count2;
        printf("%d step(s) before a loop of %d step(s)\n",before,loop);
        return;
    }
    printf("%d step(s) to exit\n",count1);
    return;
}

int main()
{
    while(cin>>row>>col>>pos)
    {
        if(!row || !col || !pos)
            break;

        grid.clear();
        memset(vis,0,sizeof(vis));
        count1 = count2 = 0;
        flag = 0;
        for(int i = 0; i<row; i++)
        {
            string str;
            cin>>str;
            grid.push_back(str);
        }
        movement(0,pos-1);
        verdict();
    }

    return 0;
}

/**
Sample Input
3 6 5
NEESWE
WWWESS
SNWWWW
4 5 1
SESWE
EESNW
NWEEN
EWSEN
0 0 0
Sample Output
10 step(s) to exit
3 step(s) before a loop of 8 step(s)
*/
