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

int main()
{
    lolo c=0;
    double n, x;
    while(cin>>x &&x)
    {
        n = ceil((3+sqrt(9+8*x))/2);
        pf("Case %lld: %.0lf\n", ++c, n);
    }
    return 0;
}

/**
Sample Input
10
100
1000
0
Sample Output
Case 1: 7
Case 2: 16
Case 3: 47
*/
