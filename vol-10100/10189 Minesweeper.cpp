#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
int r, c, countt;
int main()
{
    //read();
    int t=0, i, j;
    while(cin>>r>>c &&r &&c)
    {
        getchar();
        string str[r+1];
        for(i=0; i<r; i++)
            cin>>str[i];
        if(t)
            cout<<endl;
        printf("Field #%d:\n", ++t);
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                countt=0;
                if(str[i][j]=='*')
                {
                    cout<<str[i][j];
                    continue;
                }
                else
                {
                    if( (j+1 < c) && str[i][j+1]=='*'  )
                        countt++;
                    if( (j-1 >=0) && str[i][j-1]=='*' )
                        countt++;
                    if( (i-1 >=0) && str[i-1][j]=='*' )
                        countt++;
                    if( (i+1 < r) && str[i+1][j]=='*' )
                        countt++;
                    if( (i-1 >=0 && j-1>=0) && str[i-1][j-1]=='*' )
                        countt++;
                    if( (i-1 >=0 && j+1<c ) && str[i-1][j+1]=='*' )
                        countt++;
                    if( (i+1 < r && j-1>=0 ) && str[i+1][j-1]=='*' )
                        countt++;
                    if( (i+1 < r && j+1<c ) && str[i+1][j+1]=='*' )
                        countt++;
                    cout<<countt;
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
