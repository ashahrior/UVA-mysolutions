#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, i, dis;
        cin>>n;
        int ara[n+1];
        for(i=0; i<n; i++)
            cin>>ara[i];
        dis=0;
        sort(ara,ara+n);
        for(i=n-3; i>=0; i-=3)
            dis+=ara[i];
        cout<<dis<<endl;
    }
    return 0;
}
