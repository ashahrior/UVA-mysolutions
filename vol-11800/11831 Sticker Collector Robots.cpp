#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

int row, col, cmd, countt, x, y;
char dir;
vector <string> graph;
string in;

void movement()
{
    switch(dir)
    {
        case 'N': x--; break;
        case 'S': x++; break;
        case 'L': y++; break;
        case 'O': y--; break;
    }

    if(x<0 || y<0 || x==row || y==col || graph[x][y]=='#')
    {
        switch(dir)
        {
            case 'N': x++; break;
            case 'S': x--; break;
            case 'L': y--; break;
            case 'O': y++; break;
        }
        return;
    }

    if(graph[x][y]=='*')
    {
        countt++;
        graph[x][y] = '.';
        return;
    }
    return;
}

void start(int a, int b)
{
    x = a, y = b;
    int sz = in.size();
    for(int i = 0; i<sz; i++)
    {
        switch(in[i])
        {
        case 'D':
            if(dir=='N') dir = 'L';
            else if(dir=='S') dir = 'O';
            else if(dir=='L') dir = 'S';
            else if(dir=='O') dir = 'N';
            break;
        case 'E':
            if(dir=='N') dir = 'O';
            else if(dir=='S') dir = 'L';
            else if(dir=='L') dir = 'N';
            else if(dir=='O') dir = 'S';
            break;
        case 'F':
            movement();
        }
    }
}

int main()
{
    while(cin>>row>>col>>cmd)
    {
        if(!row || !col || !cmd)
            break;

        graph.clear();
        countt = 0;

        for(int i = 0; i<row; i++)
        {
            string str;
            cin>>str;
            graph.push_back(str);
        }

        cin>>in;

        for(int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                if( graph[i][j]=='N' || graph[i][j]=='S' || graph[i][j]=='L' || graph[i][j]=='O' )
                {
                    dir = graph[i][j];
                    start(i,j);
                    break;
                }
            }
        }
        cout<<countt<<endl;
    }

    return 0;
}

/**
Sample Input
3 3 2
***
*N*
***
DE
4 4 5
...#
*#O.
*.*.
*.#.
FFEFF
10 10 20
....*.....
.......*..
.....*....
..*.#.....
...#N.*..*
...*......
..........
..........
..........
..........
FDFFFFFFEEFFFFFFEFDF
0 0 0
Sample Output
0
1
3
*/
