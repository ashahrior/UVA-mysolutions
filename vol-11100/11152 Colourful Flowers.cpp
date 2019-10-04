#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793
int main()
{
    ///freopen("11152.txt","r",stdin);
    int a, b, c;
    double sunflowers, violets, roses, semiperimeter;
    double area_triangle, outer_circle_radius, inner_circle_radius;
    while(cin>>a>>b>>c)
    {
        semiperimeter = ((a+b+c)/2.0);
        area_triangle = sqrt(semiperimeter*(semiperimeter-a)*(semiperimeter-b)*(semiperimeter-c));
        outer_circle_radius = ((a*b*c)/(4*area_triangle));
        inner_circle_radius = (area_triangle/semiperimeter);
        roses = (PI*inner_circle_radius*inner_circle_radius);
        violets = area_triangle - roses;
        sunflowers = PI*outer_circle_radius*outer_circle_radius - area_triangle;
        printf("%.04lf %.04lf %.04lf\n", sunflowers, violets, roses);
    }
    return 0;
}
