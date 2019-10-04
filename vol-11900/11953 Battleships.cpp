#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

int n, sz;
vector <string> ship;

void bomb(int x, int y)
{
    if(x<0 || y<0 || x==n || y==n || ship[x][y]=='.')
        return;

    ship[x][y] = '.';
    bomb(x,y-1);
    bomb(x,y+1);
    bomb(x+1,y);
    bomb(x-1,y);
    bomb(x+1,y+1);
    bomb(x+1,y-1);
    bomb(x-1,y+1);
    bomb(x-1,y-1);
    return;
}

int main()
{
    int t;
    cin>>t;
    for(int cs=1; cs<=t; cs++)
    {
        ship.clear();
        cin>>n;
        for(int i= 0; i<n; i++)
        {
            string str;
            cin>>str;
            ship.push_back(str);
        }
        int countt = 0;
        for(int i =0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(ship[i][j]=='x')
                {
                    bomb(i,j);
                    countt++;
                }
            }
        }
        printf("Case %d: %d\n", cs, countt);
    }
    return 0;
}

/**
Sample Input
2
4
x...
..x.
@.@.
....
2
..
x.
Sample Output
Case 1: 2
Case 2: 1
*/
