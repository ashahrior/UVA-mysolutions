#include<stdio.h>
#include<math.h>
int main()
{
    long long int i, n, x, t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        x = (-1 + sqrt(1+8*n))/2;
        printf("%lld\n",x);
    }
    return 0;
}

/* this program has time limit issues.
So in order to solve this problem, it is required to use a polynomial formula.*/

/*
#include<stdio.h>
int main()
{
    long long int t, n, i, j, sum, count;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        if(n==0 || n==1)
        {
            printf("%lld\n",n);
        }
        else
        {
            sum=0;
            for(j=1; j<=n; j++)
            {
                sum = sum + j;
                if(sum==n)
                {
                    count = j;
                    break;
                }
                else if(sum>n)
                {
                    count = j-1;
                    break;
                }
            }
            printf("%lld\n",count);
        }
    }
    return 0;
}
*/
