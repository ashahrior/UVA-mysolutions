#include<bits/stdc++.h>
using namespace std;
long long fact[10000000];
void calc()
{
    long long i, x, lim, sum, j, d;
    for(i=1; i<=1005; i++)
    {
        x = i;
        lim = sqrt(x);
        if(i!=1)
            sum = x+1;
        else sum = 1;
        for(j=2; j<=lim; j++)
        {
            if(x%j==0)
            {
                sum+=j;
                d = x/j;
                if(d!=j)
                    sum+=d;
            }
        }
        fact[sum] = i;
    }
}
int main()
{
    calc();
    long long c=0, i, s, n;
    while(cin>>s &&s)
    {
        c++;
        n = fact[s];
        if(!n)
            printf("Case %lld: -1\n",c);
        else
            printf("Case %lld: %lld\n",c, n);
    }
    return 0;
}
