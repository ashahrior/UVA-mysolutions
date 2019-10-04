#include<stdio.h>
#include<algorithm>
using namespace std;
long long int a[2000010];
int main()
{
    long long int n,j;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        for(j=0; j<n; j++)
        {
            scanf("%lld",&a[j]);
        }
        sort(a,a+j);
        for(j=0; j<n; j++)
        {
            printf("%lld",a[j]);
            if (j<(n-1))
                printf(" ");
        }
       printf("\n");
    }
    return 0;
}
