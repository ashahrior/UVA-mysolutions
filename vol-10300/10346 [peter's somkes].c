#include<stdio.h>
int main()
{
    int n, k, d, i, sum=0,rem=0;
    while((scanf("%d %d", &n, &k))==2)
    {
        sum = n;
        while(n>0)
        {
            d=n / k;
            sum= sum + d;
            if(d<1)
            {
                break;
            }
            rem=n%k;
            n=d + rem ;
        }
        printf("%d\n",sum);
    }
    return 0;
}
