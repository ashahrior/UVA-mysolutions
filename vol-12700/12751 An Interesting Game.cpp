#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
int main()
{
    lolo t, z, n, k, x, tw, i;
    cin>>t;
    for(z=1; z<=t; z++)
    {
        cin>>n>>k>>x;
        tw = (n*(n+1))/2;
        for(i=1; i<=k; i++)
        {
            tw = tw - x;
            x++;
        }
        printf("Case %d: ", z);
        cout<<tw<<endl;
    }
    return 0;
}
