#include<stdio.h>
#include<string.h>
int main()
{
    long long int d, i, n, sum=0;
    char s[100];
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",s);
        if(s[0] == 100)
        {
            scanf("%lld",&d);
            sum= sum + d;
        }
        if(s[0] == 114)
        {
            printf("%lld\n",sum);
        }
    }
    return 0;
}
