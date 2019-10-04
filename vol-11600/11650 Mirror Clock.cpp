#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m, x, y;
        sf("%d:%d",&h,&m);
        h = 11-h+(m==0);
        if(h<=0)
            h+=12;
        if(h!=0)
            m = 60-m;
        if(m==60)
            m=0;
        pf("%02d:%02d\n",h,m);
    }
    return 0;
}
