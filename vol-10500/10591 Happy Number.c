#include<stdio.h>
int main()
{
    long long int num[100000];
    long long int z, c, d, i, j, n, x, rem, sum, count;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld",&z);
        x=z;
        num[0] = x;
        j=0;
        count=0;
        sum=0;
        while(1)
        {
            sum=0;
            while(x!=0)
            {
                rem = x % 10;
                sum+= rem*rem;
                x = x / 10;
            }
            x = sum;
            if(sum==1)
            {
                break;
            }
            j++;
            num[j] = x;
            for(c=0;c<j;c++)
            {
                if(num[c]==num[j])
                {
                    count++;
                }
            }
            if(count!=0)
            {
                break;
            }
        }
        if(sum==1)
        {
            printf("Case #%lld: %lld is a Happy number.\n",i,z);
        }
        else
        {
            printf("Case #%lld: %lld is an Unhappy number.\n",i,z);
        }
    }
    return 0;
}
