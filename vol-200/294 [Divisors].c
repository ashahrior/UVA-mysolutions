#include<stdio.h>
#include<math.h>
int main()
{
    long long lwr,upp,t,j,i,divisor,Max,num;
    scanf("%lld", &t);
    while(t--)
    {
        scanf("%lld %lld",&lwr,&upp);
        Max=0;
        for(i=lwr; i<=upp; i++)
        {
            divisor=0;
            int p=sqrt(i);
            for(j=1; j<=p; j++)
            {
                if(i%j==0)
                {
                    divisor++;
                    if(i/j!=j)
                    {
                        divisor++;
                    }
                }
                if(Max<divisor)
                {
                    Max=divisor;
                    num=i;
                }
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",lwr,upp,num,Max);
    }
    return 0;
}
