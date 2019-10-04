#include<stdio.h>
#include<math.h>
int main()
{
    double x, y, z, s, a,area;
    while(scanf("%lf%lf%lf", &x, &y, &z)==3)
    {
        s = ((x+y+z)/2);
        a = s*(s-x)*(s-y)*(s-z);
        a = sqrt(a);
        area = (4.0*a)/3.0;
        if(area>0)
        {
            printf("%.3lf\n",area);
        }
        else
        {
            area = -1;
            printf("%.3lf\n",area);
        }
    }
    return 0;
}
