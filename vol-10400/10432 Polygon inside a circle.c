#include<stdio.h>
#include<math.h>
int main()
{
    double r, n, a;
    while(scanf("%lf%lf", &r,&n)==2)
    {
        /*a = (r*r)/2.0*(sin(2.0*3.1415926535897932384626433832795/n));*/
        /*a = a*n;*/
        a = r*r*n/2*sin(2.0*acos(-1)/n);
        printf("%.3lf\n",a);
    }
    return 0;
}
