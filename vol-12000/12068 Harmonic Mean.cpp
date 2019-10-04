#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define mset(a) memset(a,-1,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
lolo i, j;
lolo gcd(lolo a, lolo b)
{
    lolo t;
    while(b!=0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}
lolo losagu(lolo *ara, lolo n)
{
    lolo g=1, gc;
    for(i=0; i<n; i++)
    {
        //gc = __gcd(ara[i],g);
        gc = gcd(ara[i],g);
        g = (ara[i]*g)/gc;
    }
    return g;
}
int main()
{
    //read();
    lolo t, c, n, lcm;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        cin>>n;
        lolo ara[n+1];
        for(i=0; i<n; i++)
            cin>>ara[i];
        lcm = losagu(ara,n);
        lolo sum=0;
        for(i=0; i<n; i++)
            sum+=(lcm/ara[i]);
        lolo up = n*lcm;
        lolo down = sum;
        //lolo x = __gcd(up,down); /// __gcd() - built in function also works
        lolo x = gcd(up,down);
        pf("Case %lld: ", c);
        cout<< up/x << "/" << down/x<<endl;
    }
    return 0;
}
