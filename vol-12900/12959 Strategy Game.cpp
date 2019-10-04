#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int j, r;
    while(cin>>j>>r)
    {
        int ara[j+2], i, k, num, maxx=0, pos;
        memset(ara,0,sizeof(ara));
        for(i=1; i<=r; i++)
        {
            for(k=1; k<=j; k++)
            {
                cin>>num;
                ara[k]+=num;
                if(ara[k]>=maxx)
                {
                    pos = k;
                    maxx = ara[k];
                }
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}

