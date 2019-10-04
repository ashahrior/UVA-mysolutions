#include<stdio.h>
int main()
{
    long long int a ,b, c, d, L, count, i, eqn;
    while(scanf("%lld%lld%lld%lld%lld", &a,&b,&c,&d,&L)==5 && (a || b || c || d || L))
    {
        count=0;
        for(i=0; i<=L; i++)
        {
            eqn = a * i * i + b * i + c;
            if(eqn%d==0)
                count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
