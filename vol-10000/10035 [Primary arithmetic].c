#include<stdio.h>
int main()
{
    long long int a, b, d1, d2, rem, rem1, rem2, remz, count;
    while(scanf("%lld%lld", &a, &b)==2 && (a||b))
    {
        remz = 0;
        count = 0;
        while((a!=0) || (b!=0))
        {
            d1 = a / 10;
            rem1 = a % 10;
            a = d1;
            d2 = b / 10;
            rem2 = b % 10;
            b = d2;
            remz = remz + rem1 + rem2;
            remz = remz / 10;
            if(remz>0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("No carry operation.\n");
        }
        else if(count==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%lld carry operations.\n", count);
        }
    }
    return 0;
}
