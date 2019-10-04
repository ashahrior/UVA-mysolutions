#include<bits/stdc++.h>
using namespace std;
//#define lolo unsigned long long
int ara[105];
void calc()
{
    ara[0]=ara[1]=1;
    for(int i=2; i<=101; i++)
    {
        ara[i] = 2*i-1;
    }
}
int main()
{
    //freopen( "in.txt", "r", stdin);
    //freopen( "out.txt", "w", stdout);
    calc();
    int t, i, n;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n;
        printf("Case #%d: ",i);
        cout<<ara[n]<<endl;
    }
    return 0;
}
