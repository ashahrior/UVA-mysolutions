#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793
int main()
{
    double x1, y1, x2, y2, x3, y3, r, a, b, c;
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        a = sqrt( pow( (x1-x2) , 2 ) + pow( (y1-y2) , 2 ) );
        b = sqrt( pow( (x1-x3) , 2 ) + pow( (y1-y3) , 2 ) );
        c = sqrt( pow( (x2-x3) , 2 ) + pow( (y2-y3) , 2 ) );
        r = a*b*c;
        r= r/sqrt( (a+b+c) * (a+b-c) * (b+c-a) * (c+a-b) );
        printf("%.02lf\n", 2*PI*r);
    }
    return 0;
}
