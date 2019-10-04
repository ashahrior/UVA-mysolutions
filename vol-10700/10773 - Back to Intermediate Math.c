#include<stdio.h>
#include<math.h>
int main()
{
    int n, i;
    double  t1, t2, d, u, v, t;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lf%lf%lf", &d, &v, &u);
        if(u==0 || v==0 || u<=v)
        {
            printf("Case %d: can't determine\n", i);
        }
        else
        {
            t1 = (d/u);
            t2 = (d/sqrt(u*u - v*v));
            t = t2 - t1;
            if(t<0)
            {
                t = t * (-1);
            }
            printf("Case %d: %.03lf\n", i, t);
        }
    }
    return 0;
}
