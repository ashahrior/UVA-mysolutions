#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
bool visit[30][30];
string pos[30];
int dim;
void dfs(int x, int y)
{
    if(x==dim || y==dim || x<0 || y<0)
        return;
    if(pos[x][y]=='1')
    {
        pos[x][y]='0';
        dfs(x,y-1);
        dfs(x,y+1);
        dfs(x-1,y);
        dfs(x+1,y);
        dfs(x-1,y+1);
        dfs(x-1,y-1);
        dfs(x+1,y+1);
        dfs(x+1,y-1);
    }
}

int main()
{
    //read();
    int i, j, count, t=1;
    while(cin>>dim)
    {
        count=0;
        mclr(visit);
        for(i=0; i<dim; i++)
            cin>>pos[i];
        for(i=0; i<dim; i++)
        {
            for(j=0; j<dim; j++)
            {
                if(!visit[i][j] && pos[i][j]=='1')
                {
                    count++;
                    dfs(i,j);
                }
            }
        }
        cout<< "Image number "<<t<<" contains "<<count<<" war eagles."<<endl;
        t++;
    }
    return 0;
}

