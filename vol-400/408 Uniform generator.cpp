#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else gcd(b,a%b);
}
int main()
{
    long long step, mod, v;
    while(cin>>step>>mod)
    {
        v=gcd(step,mod);
        if(v==1)
            printf("%10lld%10lld    Good Choice\n\n",step,mod);
        else
            printf("%10lld%10lld    Bad Choice\n\n",step,mod);
    }
    return 0;
}
