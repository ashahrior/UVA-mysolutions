#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

int n;
vector < vector<int> > grid;
vector <int> sums;
bool flag;

void showGrid(int sum, int x, int y, int m)
{
    cout<<x<< " "<<y<< " "<<m<<endl;
    cout<<sum<<endl;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
            cout<<grid[i][j]<< " ";
        cout<<endl;
    }
    cout<<endl;
    getchar();
}

void calc(int x, int y, int m)
{
    int sum = 0;
    flag = 0;

    if(x>y || x>m)
        return;


    if(x==y==m)
    {
        sum = grid[x][y];
        sums.push_back(sum);
        //showGrid(sum,x,y,m);
        return;
    }

    for(int i = x; i<=y; i++)
    {
        if(grid[x][i]!=-1)
        {
            sum += grid[x][i];
            grid[x][i] = -1;
            flag = 1;
            //showGrid(sum,x,y,m);
        }
    }
    for(int i=x+1; i<m; i++)
    {
        if(grid[i][x+1]!=-1 && grid[i][y]!=-1)
        {
            sum += grid[i][x] + grid[i][y];
            grid[i][x] = -1 , grid[i][y] = -1;
            flag = 1;
            //showGrid(sum,x,y,m);
        }
    }
    for(int i = x; i<=y; i++)
    {
        if(grid[m][i]!=-1)
        {
            sum += grid[m][i];
            grid[m][i] = -1;
            flag = 1;
            //showGrid(sum,x,y,m);
        }
    }

    if(flag)
        sums.push_back(sum);

    calc(x+1, y-1, m-1);

    return;
}

int main()
{
    int cs = 0;
    while(cin>>n)
    {
        if(!n) break;

        grid.clear();
        sums.clear();
        grid.resize(n);

        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                int num;
                cin>>num;
                grid[i].push_back(num);
            }
        }
        calc(0,n-1,n-1);
        printf("Case %d:", ++cs);
        int sz = sums.size();
        for(int i = 0; i<sz; i++)
            cout<< " "<<sums[i];
        cout<<endl;
    }
    return 0;
}

/**
Sample Input
5
5 3 2 7 9
1 7 4 2 4
5 3 2 4 6
1 3 4 5 1
1 4 5 6 3
1
1
6
30 12 64 31 1 46
19 71 10 30 9 98
37 78 28 78 20 28
38 99 31 55 88 77
68 49 63 13 25 94
80 55 59 45 38 60
0
Sample Output
Case 1: 63 32 2
Case 2: 1
Case 3: Case 1: 980 555 192
*/
