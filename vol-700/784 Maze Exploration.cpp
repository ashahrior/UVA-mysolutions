#include<bits/stdc++.h>
using namespace std;
vector <string> graph;

int mx = 0, sz;
bool check = 0;

class POS
{
public:
    int x, y;
    void setval(int a,int b)
    {
        x = a, y = b;
    }
};
POS pos;

void flood(int x, int y)
{
    if(x<0 || y<0 || graph[x][y]=='+' || graph[x][y]=='X' || graph[x][y]=='_')
        return;

    if(graph[x][y]=='*' || graph[x][y]==' ')
    {
        graph[x][y] = '#';
        flood(x,y+1);
        flood(x,y-1);
        flood(x+1,y);
        flood(x-1,y);
//        flood(x+1,y+1); // is not required, but will not cause error
//        flood(x+1,y-1);
//        flood(x-1,y+1);
//        flood(x-1,y-1);
    }
    return;
}

void input_graph()
{
    string str;
    int x=0;
    check = 0;
    while(getline(cin,str))
    {
        int flag = str.find('_');
        if(flag!=-1)
        {
            graph.push_back(str);
            break;
        }
        flag = str.find('*');
        if(flag!=-1)
        {
            pos.setval(x,flag);
            check = 1;
        }
        graph.push_back(str);
        int s = str.size();
        mx = max(s,mx);
        x++;
    }
    return;
}

void process_graph()
{
    sz = graph.size();
    for(int i = 0; i<sz-1; i++)
    {
        int s2 = graph[i].size();
        for(int j = s2; j<mx; j++)
            graph[i] +="+";
    }
    return;
}

void paint_graph()
{
    if(check)
    {
        flood(pos.x,pos.y);
    }
    for(int i = 0; i<sz; i++)
    {
        int s = graph[i].size();
        for(int j = 0; j<s; j++)
        {
            if(graph[i][j]=='+')
                break;
            cout<<graph[i][j];
        }
        cout<<endl;
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        graph.clear();
        input_graph();
        process_graph();
        paint_graph();
    }
    return 0;
}

/*
Sample Input
2
XXXXXXXXX
X   X   X
X *     X
X   X   X
XXXXXXXXX
X   X
X   X
X   X
XXXXX
_____
XXXXX
X   X
X * X
X   X
XXXXX
_____

Sample Output
XXXXXXXXX
X###X###X
X#######X
X###X###X
XXXXXXXXX
X   X
X   X
X   X
XXXXX
_____
XXXXX
X###X
X###X
X###X
XXXXX
_____
*/
