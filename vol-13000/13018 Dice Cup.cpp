#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n ;
    bool flag = 0;
    while(cin>>m>>n)
    {
        if(flag)
            cout<<endl;
        int size, i, j, x, maxx=0;
        size = m*n;
        int ara[size+1];
        memset(ara,0,sizeof(ara));
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=n; j++)
            {
                x = i+j;
                ara[x]++;
                if(maxx<ara[x])
                {
                    maxx = ara[x];
                }
            }
        }
        for(i=0; i<=size; i++)
        {
            if(ara[i]==maxx)
                cout<<i<<endl;
            flag=1;
        }
    }
    return 0;
}
