#include<stdio.h>
#define lolo long long int
#define M 1000005
lolo a[M];
lolo b[M];
lolo res[M];
int main()
{
    lolo n, i, t, carry, indx, sum, x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0; i<n; i++)
            scanf("%lld %lld",&a[i], &b[i]);
        carry=indx=sum=0;
        for(i=n-1; i>=0; i--)
        {
            sum = a[i]+b[i]+carry;
            if(sum<10)
            {
                res[indx++] = sum;
                carry = 0;
            }
            else if(sum>9)
            {
                carry = sum/10;
                x = sum%10;
                res[indx++]=x;
            }
        }
        if(carry!=0)
            res[indx++] = carry;
        for(i=indx-1; i>=0; i--)
            printf("%lld",res[i]);
        printf("\n");
        if(t)
            printf("\n");
    }
    return 0;
}
