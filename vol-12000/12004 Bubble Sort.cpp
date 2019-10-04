#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    lolo t, n, i;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        lolo r = n*(n-1)/2;
        if(r%2)
            printf("Case %lld: %lld/2\n", i, r);
        else
            printf("Case %lld: %lld\n", i, r/2);
    }
    return 0;
}
