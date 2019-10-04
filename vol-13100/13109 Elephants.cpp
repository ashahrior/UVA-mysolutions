#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, w, i, sum, count;
    cin>>t;
    while(t--)
    {
        count=sum=0;
        cin>>n>>w;
        int ara[n+1];
        for(i=0; i<n; i++)
            cin>>ara[i];
        sort(ara, ara+n);
        for(i=0; i<n; i++)
        {
            sum+=ara[i];
            if(sum<=w)
                count++;
            else
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}
