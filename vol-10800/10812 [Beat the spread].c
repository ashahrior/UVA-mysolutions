#include<stdio.h>
int main()
{
    long long int n, s, d, i, r1, r11, r2, r22;
    scanf("%lld", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld%lld", &s, &d);
        if(s==d)
        {
            printf("%lld 0\n", s);
        }
        else if(s>d)
        {
            r1 = (s+d)/2;
            r11 = (s+d)%2;
            r2 = (s-d)/2;
            r22 = (s-d)%2;
            if(r11==0 && r22==0)
            {
                printf("%lld %lld\n", r1, r2);
            }
            else
            {
                printf("impossible\n");
            }
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
