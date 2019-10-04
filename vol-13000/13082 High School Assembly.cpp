#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    lolo c=1, i, t,  n, num, x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=1;
        for(i=0; i<n; i++)
        {
            cin>>num;
            if(num==x)
                x++;
        }
        printf("Case %lld: ", c++ );
        cout<<n-x+1<<endl;
    }
    return 0;
}
