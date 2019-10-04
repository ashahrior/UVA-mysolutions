#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, cases=0;
    while(cin>>n &&n!=-1)
    {
        int i, j, count1, count2, maxx;
        int a[1010], b[1010], s, e;
        for(i=0; i<n; i++)
        {
            cin>>a[i]>>b[i];
        }
        maxx=0;
        for(i=0; i<n; i++)
        {
            count1=count2=0;
            for(j=0; j<n; j++)
            {
                if(a[i]>=a[j] && a[i]<=b[j])
                    count1++;
                if(b[i]>=a[j] && b[i]<=b[j])
                    count2++;
            }
            if(count1>maxx)
                maxx = count1;
            if(count2>maxx)
                maxx = count2;
        }
        printf( "Case %d: %d\n", ++cases, maxx);
    }
    return 0;
}
