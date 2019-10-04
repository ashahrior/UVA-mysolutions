#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///freopen( "rafa.txt", "r", stdin);
    int t, i, c, n, out, life,count;
    char match[600];
    cin>>t;
    for(c=1; c<=t; c++)
    {
        cin>>n;
        getchar();
        for(i=0; i<n; i++)
            cin>>match[i];
            getchar();
        life  = 3, count=out=0;
        for(i=0; i<n; i++)
        {
            count++;
            if(match[i]!='W')
                life--;
            if(life==0)
            {
                out = 1;
                break;
            }
            if(match[i]=='W')
                life=3;
        }
        if(out)
            cout<<"Case "<<c<<": "<<count<<endl;
        if(!out)
            cout<<"Case "<<c<<": Yay! Mighty Rafa persists!"<<endl;
    }
    return 0;
}
