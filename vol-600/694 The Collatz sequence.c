#include<stdio.h>
int main()
{
    long long int i, j, min, max, count,c=0, x;
    while(scanf("%lld%lld",&i,&j)==2 && (i>=0 && j>=0))
    {
        if(i<=j)
        {
            min=i, max=j;
        }
        else
        {
            max=i, min=j;
        }
        x = min;
        count = 1;
        while(x!=1)
        {
            if(x%2!=0)
            {
                x=3*x+1;
                if(x>max)
                {
                    break;
                }
            }
            else
            {
                x=x/2;
            }
            count++;
        }
        c++;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n", c, min, max, count);
    }
    return 0;
}
