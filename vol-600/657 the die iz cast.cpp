#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
int cunt, h, w;
string pix[55];

void dfs_deep(int x, int y)
{
    if(x==h || y==w || x<0 || y<0 || pix[x][y]!='X')
        return;
    pix[x][y]='*';
    dfs_deep(x,y-1);
    dfs_deep(x,y+1);
    dfs_deep(x+1,y);
    dfs_deep(x-1,y);
}

void dfs(int x, int y)
{
    if(x==h || y==w || x<0 || y<0 || pix[x][y]=='.')
        return;
    if(pix[x][y]=='X')
    {
        cunt++;
        dfs_deep(x,y);
    }
    pix[x][y]='.';
    dfs(x,y-1);
    dfs(x,y+1);
    dfs(x-1,y);
    dfs(x+1,y);
}

int main()
{
    //read();
    vector <int> v;
    int i, j, throww=0;
    while(cin>>w>>h &&w &&h)
    {
        for(i=0; i<h; i++)
            cin>>pix[i];
        v.clear();
        for(i=0; i<h; i++)
        {
            for(j=0; j<w; j++)
            {
                if(pix[i][j]!='.')
                {
                    cunt=0;
                    dfs(i,j);
                    v.push_back(cunt);
                }
            }
        }
        sort(v.begin(),v.end());
        int sz = v.size();
        cout<< "Throw "<<++throww<<endl;
        for(i=0; i<sz; i++)
        {
            if(i)
                cout<< " ";
            cout<<v[i];
        }
        cout<<endl<<endl;
    }
    return 0;
}
