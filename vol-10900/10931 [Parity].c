#include<stdio.h>
int main()
{
    long long int num,i,n,count,j, sum;
    long long int a[1000];
    while(scanf("%lld",&num)==1 && num>=1)
    {
        sum = 0;
        count=0;
        n=0;
        while(num>0)
        {
            a[n]=num%2;
            num=num/2;
            n++;
        }
        for(i=n-1; i>=0; i--)
        {
            if (a[i] % 2!=0 )
            {
                count++;
            }
        }
        printf("The parity of ");
        for(j=n-1; j>=0; j--)
        {
            printf("%lld", a[j]);
        }
        printf(" is %lld (mod 2).\n",count);
    }
    return 0;
}

