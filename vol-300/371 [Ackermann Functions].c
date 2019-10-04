#include<stdio.h>
int main()
{
    long long int i, j, min, max, x, n, MAX, count, num;
    while(scanf("%lld%lld", &i, &j)==2 && i!=0 && j!=0)
    {
        MAX=0;
        if(i<=j)
        {
            min=i, max=j;
        }
        else
        {
            max=i, min=j;
        }
        if(min==1 && max<=2)
        {
            printf("Between %lld and %lld, 1 generates the longest sequence of 3 values.\n", min, max);
        }
        else
        {
            for(n=min; n<=max; n++)
            {
                x=n;
                count=0;
                while(x!=1)
                {
                    count++;
                    if(x%2!=0)
                    {
                        x=3*x+1;
                    }
                    else
                    {
                        x=x/2;
                    }
                }
                if(count>MAX)
                {
                    num = n;
                    MAX= count;
                }
            }
            printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",min, max, num, MAX);
        }
    }
    return 0;
}
