#include<stdio.h>
int main()
{
    long long int m, t, d, N, i, sum, num, sumz, rem, pal, bum;
    long long int sum2, x, p;
    scanf("%lld", &N);
    for(i=1; i<=N; i++)
    {
        bum = 0;
        sumz=0;
        sum2=0;
        scanf("%lld", &t);
        num = t;
        sum = 0;
        while(t!=0)
        {
            rem = t % 10;
            d = t / 10;
            t = d;
            sum = sum * 10 + rem;
        }
        sumz = sum + num;
        x=sumz;
        m = 0;
        while(1)
        {
            while(x!=0)
            {
                rem = x % 10;
                d = x / 10;
                x=d;
                bum = bum * 10 + rem;
            }
            p = sumz - bum;
            m++;
            if(p==0)
            {
                pal = bum;
                break;
            }
            else
            {
                x = sumz + bum;
                sumz = x;
                bum = 0;
            }
        }
        printf("%lld %lld\n", m, pal);
    }
    return 0;
}
