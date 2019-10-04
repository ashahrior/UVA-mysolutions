#include<stdio.h>
int main()
{
    long long int i, j, t, n, x, mile, juice;
    scanf("%lld", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        mile = 0, juice = 0;
        for(j=1;j<=n;j++)
        {
            scanf("%lld",&x);
            mile = mile + (x+30)/30;
            juice = juice + (x+60)/60;
        }
        mile = mile*10;
        juice = juice*15;
        if(mile<juice)
            printf("Case %lld: Mile %lld\n",i,mile);
        else if(juice<mile)
            printf("Case %lld: Juice %lld\n", i, juice);
        else
            printf("Case %lld: Mile Juice %lld\n",i,mile);
    }
    return 0;
}
