#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
int main()
{
    lolo f, n, sum;
    while(cin>>n)
    {
        if(n==1)
        {
            cout<<n<<endl;
            continue;
        }
        f = (n*(n+2)/2);
        sum = 3*f-6;
        cout<<sum<<endl;
    }
    return 0;
}

/** This got a TLE
int main()
{
    lolo n, i, j, x, count, sum, num, ara[10];
    while(cin>>n)
    {
        x=0, count=3, sum=0;
        ara[1]=1;
        if(n==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        for(i=3; i<=n; i+=2)
        {
            for(j=1; j<=i; j++)
            {
                if(j==i)
                {
                    ara[x] = count;
                }
                count+=2;
            }
        }
        num = ara[x];
        sum = num+num-2+num-4;
        cout<<sum<<endl;
    }
    return 0;
}
**/
