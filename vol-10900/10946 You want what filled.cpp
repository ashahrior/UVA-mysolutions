#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

int row, col, cnt;
vector <string> road;

class HOLE
{
public:
    char a;
    int v;
    HOLE() {}
    HOLE(char x, int y)
    {
        a = x, v = y;
    }
};

vector< HOLE > holes;

void flood(char c, int x, int y)
{
    if(x<0 || y<0 || x==row || y==col || road[x][y]=='.' || road[x][y]!=c)
        return;
    cnt++;
    road[x][y] = '.';
    flood(c, x, y-1);
    flood(c, x, y+1);
    flood(c, x+1, y);
    flood(c, x-1, y);
    return;
}

void process()
{
    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(road[i][j]>='A' && road[i][j]<='Z')
            {
                cnt = 0;
                char c = road[i][j];
                flood(c, i, j);
                HOLE h(c,cnt);
                holes.push_back(h);
            }
        }
    }
    return;
}

bool comparator(const HOLE &x, const HOLE &y)
{
    if(x.v>y.v)
        return 1;
    else if(x.v == y.v && x.a<y.a)
        return 1;
    else
        return 0;
}

void output()
{
    int sz = holes.size();

    sort(holes.begin(), holes.end(), comparator);

    for(int i = 0; i<sz; i++)
        cout<<holes[i].a << " " << holes[i].v<<endl;

    return;
}

int main()
{
    int p = 0;
    while(cin>>row>>col)
    {
        if(!row || !col)
            return 0;
        road.clear();
        holes.clear();

        for(int i = 0; i<row; i++)
        {
            string str;
            cin>>str;
            road.push_back(str);
        }
        process();
        printf("Problem %d:\n", ++p);
        output();
    }
    return 0;
}

/**
Sample Input
5 5
..AAA
E.BBB
..AA.
CC.DD
CC.D.
5 5
..AAA
E.BBB
..AA.
CC.DD
CC.D.
0 0
Sample Output
Problem 1:
C 4
A 3
B 3
D 3
A 2
E 1
Problem 2:
C 4
A 3
B 3
D 3
A 2
E 1
*/
