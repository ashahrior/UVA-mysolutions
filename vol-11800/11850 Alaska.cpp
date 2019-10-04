#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, ret;
    while(cin>>n &&n)
    {
        int ara[n+1];
        for(i=0; i<n; i++)
            cin>>ara[i];
        sort(ara, ara+n);
        bool flag;
        flag = true;
        for(i=1; i<n; i++)
        {
            if(ara[i]-ara[i-1]>200)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            ret = 1422 - (ara[n-1]+200-1422);
            if(ret>ara[n-1])
                flag=false;
        }
        if(flag)
            cout<< "POSSIBLE\n";
        else
            cout<< "IMPOSSIBLE\n";
    }
    return 0;
}
