#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)

double cx, cy;
double cal_side(double x1, double y1, double x2, double y2)
{
    double len = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return len;
}
int pythagoras(double otivuj, double vumi, double lombo)
{
    double a, b;
    a = otivuj*otivuj;
    b = vumi*vumi + lombo*lombo;
    if(a==b)
        return 1;
    else if(a>b)
        return -1;
    else return 0;
}
double process(double x1, double y1, double x2, double y2)
{
    double vumi, lombo, otivuj, mid_x, mid_y;
    int tt=200, flag = 0;
    while(tt--)
    {
        mid_x = (x1+x2)/2.0;
        mid_y = (y1+y2)/2.0;
        otivuj = cal_side(x1, y1, cx, cy);
        vumi = cal_side(x1, y1, mid_x, mid_y);
        lombo = cal_side(cx, cy, mid_x, mid_y);
        flag = pythagoras(otivuj, vumi, lombo);
        if(flag==1)
            return lombo;
        else if(flag==-1)
            x1 = mid_x, y1 = mid_y;
        else
            x2 = mid_x, y2 = mid_y;
    }
    return lombo;
}
int main()
{
    int n, i;
    double x, y, side, val, radius;
    while(cin>>n)
    {
        if(n=='*')
            break;
        cin>>cx>>cy;
        double xx[n+2], yy[n+2];
        for(i=0; i<n; i++)
        {
            cin>>x>>y;
            xx[i] = x, yy[i] = y;
        }
        xx[n] = xx[0], yy[n] = yy[0];
        radius = 100000000000000000000000000000;
        for(i=1; i<=n; i++)
        {
            val = process(xx[i], yy[i], xx[i-1], yy[i-1]);
            radius = min(radius, val);
            //cout<<radius<<endl;
        }
        pf("%.03lf\n", radius);
    }
    return 0;
}

/**
Sample input
4
2 2
0 2
2 0
4 2
2 4
*
Sample output
1.414
*/

