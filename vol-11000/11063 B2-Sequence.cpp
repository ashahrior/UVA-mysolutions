#include<bits/stdc++.h>
using namespace std;
#define lolo long long
#define sizee 100000
int main()
{
    //freopen( "in.txt", "r", stdin);
    //freopen( "out.txt", "w", stdout);
    lolo n, x=0;
    while(cin>>n)
    {
        bool flag=0;
        lolo i, j, total;
        lolo ara[n+1], sum[sizee];
        memset(sum,0,sizeof(sum));
        for(i=0; i<n; i++)
        {
            cin>>ara[i];
            if(ara[i]<1)
                flag=1;
            else if(ara[i]<ara[i-1] &&i!=0)
                flag=1;
        }
        if(flag)
        {
            printf("Case #%lld: It is not a B2-Sequence.\n\n", ++x);
            continue;
        }
        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                total = ara[i]+ara[j];
                if(sum[total]==0)
                    sum[total]=1;
                else
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            {
                printf("Case #%lld: It is not a B2-Sequence.\n\n", ++x);
                break;
            }
        }
        if(!flag)
            printf("Case #%lld: It is a B2-Sequence.\n\n", ++x);
    }
    return 0;
}
