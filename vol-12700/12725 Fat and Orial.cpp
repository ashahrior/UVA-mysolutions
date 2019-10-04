#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    double n, m, a, b, r;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>m>>a>>b;
        r = m*(a+b) - n*a;
        r = r/b;
        if(r>=0 && r<=10)
            printf("Case #%d: %.02lf \n",i,r);
        else
            cout<<"Case #"<<i<<": Impossible"<<endl;
    }
    return 0;
}
