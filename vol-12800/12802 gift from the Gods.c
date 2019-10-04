#include<stdio.h>
#include<math.h>
#define max 1000001
long long int stat[max];
void sieve()
{
    long long int i, j;
    for(i=1; i<=max; i++) stat[i] = 0;
    for(i=4; i<=max; i+=2) stat[i] = 1;
    for(i=3; i<= sqrt(max); i+=2)
    {
        if(stat[i] == 0)
        {
            for(j=2*i; j<=max; j+=i)
                stat[j]=1;
        }
    }
}

int main()
{
    long long n, x, y, z, r, d, rem, pal,sum;
    sieve();
    while(scanf("%lld", &n)==1)
    {
        r = n<<1;
        printf("%lld\n",r);
        if(stat[n]==0)
        {
            pal = n;
            d=pal;
            sum=0;
            while(d!=0)
            {
                rem = d%10;
                sum=sum*10+rem;
                d=d/10;
            }
            if(pal==sum)
                break;
        }
    }
    return 0;
}

/*
Sample Input
14
6
121
1
Sample Output
28
12
242
2
*/
