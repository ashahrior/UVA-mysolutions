#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
lolo ara[10];
void fact()
{
    lolo i;
    ara[0] = 1, ara[1]=1;
    for(i=2; i<=9; i++)
    {
        ara[i] = i*ara[i-1];
    }
}
int main()
{
    fact();
    lolo n;
    while(cin>>n)
    {
        int i, count=0;
        for(i=9; i>=1; i--)
        {
            while(n>=ara[i])
            {
                count++;
                n = n-ara[i];
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
