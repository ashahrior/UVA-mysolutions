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
    //read();
    double D, V, d;
    while(cin>>D>>V)
    {
        if(D==0 && V==0)
            break;

        d = cbrt((PI*D*D*D - 6*V)/PI);
        pf("%.03lf\n", d);
    }
    return 0;
}
