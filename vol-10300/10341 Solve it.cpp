#include<bits/stdc++.h>
using namespace std;
#define sqr(x) x*x
#define EPS 1e-9

double p , q, r, s, t, u;

double eqn(double x)
{
    return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*sqr(x) + u;
}

double calc()
{
    double lo = 0, hi = 1;
    //while(fabs(hi-lo)>EPS)
    for(int i = 0; i<23; i++)
    {
        double x = (lo+hi)/2.0;
        if(eqn(lo) * eqn(x) <=0)
            hi = x;
        else lo = x;
    }
    return (lo+hi)/2.0;
}

int main()
{
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        double chk = eqn(0) * eqn(1) ;
        if(chk>0)
            cout<< "No solution"<<endl;
        else
            printf("%.4lf\n", calc());
    }
    return 0;
}

/**
Sample Input
0 0 0 0 -2 1
1 0 0 0 -1 2
1 -1 1 -1 -1 1
Sample Output
0.7071
No solution
0.7554
*/

