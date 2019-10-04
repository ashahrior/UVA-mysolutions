#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, n, maxx, x, j;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        maxx=0;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>x;
            if(x>maxx)
                maxx=x;
        }
        printf("Case %d: %d\n", i, maxx);
    }
    return 0;
}

