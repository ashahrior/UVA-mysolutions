#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long lolo;
#define MX 1000010
vector <lolo> vec[MX];
lolo ara[MX];
int main()
{
    /*freopen("easyin.txt", "r", stdin);
    freopen( "easyout.txt", "w", stdout);*/
    lolo n, m, i, k, v;
    while(cin>>n>>m)
    {
        for(i=0; i<MX; i++)
            vec[i].clear();
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            vec[ara[i]].push_back(i+1);
        }
        for(i=0; i<m; i++)
        {
            cin>>k>>v;
            if(vec[v].size()<k)
                cout<<"0"<<endl;
            else
            {
                cout<<vec[v][k-1]<<endl;
            }
        }
    }
    return 0;
}


/**
/// this got a time limit
int main()
{
    //freopen("easyin.txt", "r", stdin);
    //freopen( "easyout.txt", "w", stdout);
    lolo i, j, n, m, ara[100002], k, v, pos,count;
    while(cin>>n>>m)
    {
        for(i=1; i<=n; i++)
            cin>>ara[i];
        for(i=1; i<=m; i++)
        {
            cin>>k>>v;
            pos=count=0;
            for(j=1; j<=n; j++)
            {
                if(ara[j]==v)
                    count++;
                if(count==k)
                {
                    pos = j;
                    break;
                }
            }
            cout<<pos<<endl;
        }
    }
    return 0;
}
**/
