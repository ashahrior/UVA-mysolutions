#include<bits/stdc++.h>
using namespace std;
typedef long long lolo;
int main()
{
    lolo n, d, r;
    while(cin>>n>>d>>r &&n &&d &&r)
    {
        lolo morning[n+1], after[n+1];
        lolo i, sum=0, t, pay=0;
        bool big=0;
        for(i=0; i<n; i++)
            cin>>morning[i];
        for(i=0; i<n; i++)
            cin>>after[i];
        sort(morning, morning+n);
        sort(after, after+n);
        lolo j=n-1;
        for(i=0; i<n; i++, j--)
        {
            sum = morning[i] + after[j];
            if(sum>d)
            {
                big = 1;
                t = sum - d;
                pay+=t;
            }
        }
        pay = pay*r;
        if(!big)
            cout<<0<<endl;
        else
            cout<<pay<<endl;
    }
    return 0;
}
