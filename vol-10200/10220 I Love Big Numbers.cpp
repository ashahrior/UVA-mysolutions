#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define mset(a) memset(a,-1,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
int main()
{
    int t, a[30000], counter[10], n, i, j, carry, m, x;
    while(cin>>n)
    {
        mclr(a);
        mclr(counter);
        a[0]=1, m=1, carry=0;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<m; j++)
            {
                x = a[j]*i + carry;
                a[j] = x%10;
                carry = x/10;
            }
            while(carry>0)
            {
                a[m] = carry%10;
                carry = carry/10;
                m++;
            }
        }
        lolo sum=0;
        for(i=m-1; i>=0; i--)
        {
            lolo x = a[i];
            sum+=x;
        }
        cout<<sum<<endl;
    }
    return 0;
}

