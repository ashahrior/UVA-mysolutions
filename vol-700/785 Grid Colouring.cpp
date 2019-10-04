#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

class POS
{
public:
    char c;
    int x, y;
    void set_val(char s, int a, int b)
    {
        c = s;
        x = a, y = b;
    }
};

POS pos;
string str;
vector <string> graph;
vector <POS> sym;
bool vis[40][90];

void process_graph()
{
    int sz = graph.size();
    for(int i = 0; i<sz-1; i++)
    {
        int s = graph[i].size();
        for(int j = 0; j<s; j++)
        {
            if(graph[i][j]!='X' && graph[i][j]!=' ')
            {
                pos.set_val(graph[i][j], i, j);
                sym.push_back(pos);
            }
        }
    }
    return;
}

void flood(char c, int x, int y)
{
    if(x<0 || y<0 || graph[x][y]=='X' || vis[x][y])
        return;

    graph[x][y] = c;
    vis[x][y] = 1;
    flood(c, x, y+1);
    flood(c, x, y-1);
    flood(c, x+1, y);
    flood(c, x-1, y);

    return;
}

void paint_graph()
{
    int sz = sym.size();
    for(int i = 0; i<sz; i++)
        flood(sym[i].c, sym[i].x, sym[i].y);

    sz = graph.size();
    for(int i = 0; i<sz; i++)
        cout<<graph[i]<<endl;
    return;
}

int main()
{
    //read();
    while(getline(cin,str))
    {
        if(str[0]=='_')
        {
            graph.push_back(str);
            process_graph();
            paint_graph();
            graph.clear();
            sym.clear();
            memset(vis,0,sizeof(vis));
        }
        else
            graph.push_back(str);
    }

    return 0;
}


/**
Sample Input
  XXXXXXXXXXXXXXXXXXXX
  X      X           X
  X # #  XXXXXXXX /  X
  X             X    X
  XXXXXXXXXXXXXXXXXXXX
_____________________________

   XXXXXXXXXXXX       XXXXXX
  X       #   XXX  XXX   X X
  X  XX         X  X     X X
 X  X  X  XXXXXXX  XXXXXXX
 X   XX   X
  X       X  XXXX  XXXXXXXX
   XX     XXXX  X  X  /   X
    X           X  X  /   X
    XXXXXXXXXXXXX  XXXXXXXX
_____________________________

Sample Output
  XXXXXXXXXXXXXXXXXXXX
  X######X///////////X
  X######XXXXXXXX////X
  X#############X////X
  XXXXXXXXXXXXXXXXXXXX
_____________________________

   XXXXXXXXXXXX       XXXXXX
  X###########XXX  XXX   X X
  X##XX#########X  X     X X
 X##X  X##XXXXXXX  XXXXXXX
 X###XX###X
  X#######X  XXXX  XXXXXXXX
   XX#####XXXX##X  X//////X
    X###########X  X//////X
    XXXXXXXXXXXXX  XXXXXXXX
_____________________________
*/
