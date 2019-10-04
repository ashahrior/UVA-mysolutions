#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
lolo calc(lolo n)
{
    lolo x=1, k, one=1;
    while(1)
    {
        if(x<n)
        {
            x=x*10+1;
            one++;
        }
        k = x%n;
        if(k==0)
            break;
        else
            x=k;
    }
    return one;
}

int main()
{
    lolo n, r;
    while(cin>>n)
    {
        r = calc(n);
        cout<<r<<endl;
    }
    return 0;
}
