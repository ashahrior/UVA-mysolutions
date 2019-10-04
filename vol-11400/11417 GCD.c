#include<stdio.h>
int main()
{
    long long int a, b, n, i, j, rem, GCD, G;
    while(scanf("%lld",&n) &&n!=0)
    {
        G = 0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                b = j, a = i;
                while(a!=0)
                {
                    rem = b%a;
                    b=a;
                    a=rem;
                }
                GCD = b;
                G = G + GCD;
            }
        }
        printf("%lld\n",G);
    }
    return 0;
}

/*
G=0;
for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)
{
G+=GCD(i,j);
}
*/
