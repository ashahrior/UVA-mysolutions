#include<stdio.h>
#include<math.h>
int main()
{
    int t, i;
    double s, x, y, r;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&x,&y,&r);
        s = sqrt((x*x)+(y*y));
        printf("%.2lf %.2lf\n", r-s, r+s);
    }
    return 0;
}
