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
    lolo n, i;
    double sum, dif, avg, sum1, sum2, ppl[1005];
    while(scanf("%lld",&n)==1 && n!=0)
    {
        sum = 0;
        for(i=0; i<n; i++)
        {
            scanf("%lf",&ppl[i]);
            sum+=ppl[i];
        }
        avg = sum/(double)n;
        dif = sum1 = sum2 = 0;
        for(i=0; i<n; i++)
        {
            dif = (double) (lolo) ((ppl[i]-avg)*100.0)/100.0;
            if(dif>0)
                sum1+=dif;
            else sum2-=dif;
        }
        pf("$%.02lf\n", max(sum1,sum2));
    }
    return 0;
}

/**
Sample Input
3
10.00
20.00
30.00
4
15.00
15.01
3.00
3.01
0
Sample Output
$10.00
$11.99
*/
