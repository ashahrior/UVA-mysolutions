#include<stdio.h>
#include<math.h>
int main()
{
    long long int a, b, i, count;
    while(scanf("%lld%lld", &a, &b)==2 && (a!=0 &&b!=0))
    {
        count=0;
        for(i=a; i<=b; i++)
        {
            if((int) sqrt(i)==sqrt(i))
            {
                count++;
            }
        }
        printf("%lld\n", count);
    }
    return 0;
}
