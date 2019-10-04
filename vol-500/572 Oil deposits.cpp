#include<bits/stdc++.h>
using namespace std;
string str[105];
int m, n;
void oil(int x, int y);
int main()
{
    while(cin>>m>>n &&m &&n)
    {
        getchar();
        int i, j, count=0;
        for(i=0; i<m; i++)
            str[i]= "";
        for(i=0; i<m; i++)
            cin>>str[i];
        for(i=0; i<m; i++) for(j=0; j<n; j++)
            {
                if(str[i][j]=='@')
                {
                    count++;
                    oil(i,j);
                }
            }
        cout<<count<<endl;
    }
    return 0;
}
void oil(int x, int y)
{
    if(x==m || y==n || x<0 || y<0)
        return;
    if(str[x][y]=='@')
    {
        str[x][y]='*';
        oil(x,y-1);
        oil(x,y+1);
        oil(x-1,y);
        oil(x+1,y);
        oil(x-1,y+1);
        oil(x-1,y-1);
        oil(x+1,y+1);
        oil(x+1,y-1);
    }
}
