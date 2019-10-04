#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
#define pf printf
int main()
{
    lolo b, s, c=0;
    while(cin>>b>>s &&b &&s)
    {
        if(b==0 || b==1)
            pf("Case %lld: :-\\\n", ++c);
        else if(b<=s)
            pf("Case %lld: :-|\n", ++c);
        else if(b>s)
            pf("Case %lld: :-(\n", ++c);
    }
    return 0;
}
