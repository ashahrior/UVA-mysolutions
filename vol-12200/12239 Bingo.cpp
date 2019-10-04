#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, b;
    while(cin>>n>>b &&n &&b)
    {
        int f[n+1], i, d, count=0, j;
        memset(f,0,sizeof(f));
        int ara[b+1];
        for(i=0; i<b; i++)
        {
            cin>>ara[i];
        }
        sort(ara,ara+i);
        for(i=0 ;i<b; i++)
        {
            for(j=i; j<b; j++)
            {
                d = abs(ara[i] - ara[j]);
                f[d]++;
            }
        }
        for(i=0; i<n+1; i++)
        {
            if(f[i]!=0)
                count++;
        }
        if(count==n+1)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
