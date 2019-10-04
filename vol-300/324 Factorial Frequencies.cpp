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
lolo ara[30000], counter[11];
int main()
{
	lolo n, i, j, carry, m, x, z;
	while(cin>>n &&n)
	{
		mclr(ara);
		mclr(counter);
		ara[0]=1, m=1, carry=0;
		for(i=1; i<=n; i++)
		{
			for(j=0; j<m; j++)
			{
				x = ara[j]*i + carry;
				ara[j] = x%10;
				carry = x/10;
			}
			while(carry>0)
			{
				ara[m] = carry % 10;
				carry = carry/10;
				m++;
			}
		}
		pf("%lld! --\n  ", n);
		for(i=m-1; i>=0; i--)
		{
		    int z = ara[i];
		    counter[z]++;
		}
		/*for(i=0; i<10; i++)
            pf("Counter[%d] = %d\n", i, counter[i]);*/
        for(i=0; i<10; i++)
        {
            if(i==5)
                pf("\n  ");
            pf("(%lld)%5lld  ", i, counter[i]);
        }
        cout<<endl;
	}
	return 0;
}

