#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int t, c, n, i, m, p, x, count;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        cin>>n;
        string name[n+1];
        int low[n+1], hi[n+1];
        getchar();
        for(i=0; i<n; i++)
        {
            cin>>name[i]>>low[i]>>hi[i];
            getchar();
        }
        cin>>m;
        for(i=0; i<m; i++)
        {
            cin>>p;
            count=0;
            for(int j=0; j<n; j++)
            {
                if(p>=low[j] && p<=hi[j])
                {
                    count++;
                    x=j;
                }
                if(count>1)
                    break;
            }
            if(count==1)
                cout<<name[x]<<endl;
            else
                cout<< "UNDETERMINED"<<endl;
        }
        if(c<=t-1)
            cout<<endl;
    }
    return 0;
}
