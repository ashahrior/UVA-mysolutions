#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int x[100], t, n, i, j, p, d, od;
    scanf("%lld",&t);
    for(i=1; i<=t;  i++)
    {
        scanf("%lld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&x[j]);
        }
        sort(x,x+j);
        p = n-1;
        d = x[p]- x[0];
        od = 2*d;
        printf("%lld\n",od);
    }
    return 0;
}

