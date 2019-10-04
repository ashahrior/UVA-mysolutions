#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char s[1000];
    long long int i, j, l, z, num, sum;
    while(gets(s))
    {
        l = strlen(s);
        z=l;
        i=0;
        sum=0;
        for(j=1; j<=l; j++)
        {
            num = s[i] - '0';
            i++;
            sum+= num * (pow(2,z)-1);
            z--;
        }
        if(sum==0)
        {
            break;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
