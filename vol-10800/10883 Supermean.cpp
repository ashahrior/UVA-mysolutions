#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
double avrg;
void calc(int c, double *ara, int n)
{
    int i;
    if(n==1)
    {
        double res = ara[0];
        printf("Case #%d: %.3lf\n", c, res);
        return;
    }
    for(i=0; i<n-1; i++)
    {
        ara[i] = ((ara[i]+ara[i+1])/2.00);
    }
    n--;
    calc(c,ara,n);
}

int main()
{
    //read();
    int t, c, n, i;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        avrg=0;
        cin>>n;
        double ara[n+1];
        for(i=0; i<n; i++)
            cin>>ara[i];
        calc(c,ara, n);
        //printf("Case %d: %.3lf \n", c, avrg);
    }
    return 0;
}

