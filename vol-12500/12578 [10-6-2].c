#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    int i, t;
    double l, w, r, red, green, d;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf", &l);
        if(l>10)
        {
            d=l/10;
            w = 6 * d;
            r = 2 * d;
        }
        else
        {
            d = 10/l;
            w = 6 / d;
            r = 2 / d;
        }
        red = PI * r * r;
        green = (l * w) - red;
        printf("%.2lf %.2lf\n", red, green);
    }
}
