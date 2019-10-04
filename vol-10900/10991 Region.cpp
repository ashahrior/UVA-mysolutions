#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r1, r2, r3, b1, b2, b3, peri, a1, a2, a3, tri_area, arc1, arc2, arc3, result;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>r1>>r2>>r3;

        b1 = r2+r3 , b2 = r1+r3 , b3 = r2+r1 ;
        peri = (b1+b2+b3)/2;
        tri_area = sqrt( peri*(peri-b1)*(peri-b2)*(peri-b3) );

        a1 = acos( (b2*b2+b3*b3-b1*b1)/(2*b2*b3) );
        a2 = acos( (b1*b1+b3*b3-b2*b2)/(2*b1*b3) );
        a3 = acos( (b2*b2+b1*b1-b3*b3)/(2*b2*b1) );

        arc1 = 0.5 * a1 * r1*r1;
        arc2 = 0.5 * a2 * r2*r2;
        arc3 = 0.5 * a3 * r3*r3;

        result = tri_area - arc1 - arc2 - arc3;

        printf("%.06lf\n", result);
    }
    return 0;
}
