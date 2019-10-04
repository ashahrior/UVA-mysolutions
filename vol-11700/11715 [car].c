#include<stdio.h>
#include<math.h>
int main()
{
    double u, v, t, s, a, x, y, z;
    long long int c,d=0;
    while(scanf("%lld", &c)==1 &&c!=0)
    {
        d++;
        switch(c)
        {
        case 1:
            scanf("%lf%lf%lf", &u, &v, &t);
            s = ((u+v)/2)*t;
            a = ( v-u)/t;
            printf("Case %lld: %.3lf %.3lf\n", d, s, a);
            break;
        case 2:
            scanf("%lf%lf%lf", &u, &v, &a);
            t = (v-u)/a;
            if(t<0)
            {
                t = t * (-1);
            }
            s = ((u+v)/2)*t;
            printf("Case %lld: %.3lf %.3lf\n", d, s, t);
            break;
        case 3:
            scanf("%lf%lf%lf", &u, &a, &s);
            v = u*u + 2*a*s;
            v = sqrt(v);
            t = (v-u)/a;
            if(t<0)
            {
                t = t * (-1);
            }
            printf("Case %lld: %.3lf %.3lf\n", d, v, t);
            break;
        case 4:
            scanf("%lf%lf%lf", &v, &a, &s);
            u = v*v - 2*a*s;
            u = sqrt(u);
            t = (v-u)/a;
            if(t<0)
            {
                t = t * (-1);
            }
            printf("Case %lld: %.3lf %.3lf\n", d, u, t);
            break;
        }
    }
    return 0;
}
