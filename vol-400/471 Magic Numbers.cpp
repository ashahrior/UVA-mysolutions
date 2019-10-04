#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
#define maxx 9876543210
bool check(lolo x)
{
    lolo n, ara[11];
    memset(ara,0,sizeof(ara));
    while(x>0)
    {
        n = x%10;
        ara[n]++;
        if(ara[n]>1)
            return 0;
        x = x/10;
    }
    return 1;
}
int main()
{
    lolo i, t, n, s1, s2, limit;
    cin>>t;
    while(t--)
    {
        cin>>n;
        limit = maxx/n;
        for(i=1; i<=limit; i++)
        {
            if(check(i) && check(i*n))
                cout<<i*n<< " / "<< i << " = " << n<<endl;
        }
        if(t)
            cout<<endl;
    }
    return 0;
}

