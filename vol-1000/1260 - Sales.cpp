#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, j, n, ara[1050], count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        for(i=0; i<n; i++)
            cin>>ara[i];
        for(i=0; i<n; i++)
        {
            for(j=0; j<i; j++)
            {
                if(ara[j]<=ara[i])
                    count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
