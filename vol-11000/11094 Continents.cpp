#include<bits/stdc++.h>
using namespace std;
#define write() freopen("out.txt", "w", stdout)
#define read() freopen("in.txt", "r", stdin)

int row, col, X, Y;
vector<string> graph;
bool vis[25][25];
char miji, land, water;
int MX, countt;

void flood(int x, int y)
{
    if(y==col)
        y = 0;
    else if(y==-1)
        y = col-1;

    if(x<0 || y<0 || x>=row || y>=col || graph[x][y]==water || vis[x][y]==1)
        return;

    countt++;

    vis[x][y] = 1;

    flood(x,y-1);
    flood(x,y+1);
    flood(x-1,y);
    flood(x+1,y);

    return;
}

void check()
{
    for(int i = 0 ; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(graph[i][j]==miji)
                land = graph[i][j];
            else water = graph[i][j];
            if(land!=' ' && water!=' ')
                break;
        }
    }
    return;
}

void conquer()
{
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(graph[i][j]==land)
            {
                countt=0;
                flood(i,j);
                MX = max(countt,MX);
            }
        }
    }
    return;
}

int main()
{
    while(cin>>row>>col)
    {
        graph.clear();
        memset(vis,0,sizeof(vis));
        MX = 0;
        land=' ', water=' ';
        for(int i = 0 ; i<row; i++)
        {
            string str;
            cin>>str;
            graph.push_back(str);
        }
        cin>>X>>Y;
        miji = graph[X][Y];
        check();
        flood(X,Y);
        conquer();
        cout<<MX<<endl;
    }
    return 0;
}

/**
Sample Input
5 5
wwwww
wwllw
wwwww
wllww
wwwww
1 3
7 5
lwwwl
wwlww
lwllw
wwwww
llwww
wwwlw
lwwll
5 3
Sample Output
2
3
*/
