#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int str[30005];
    int t, n, i, j, k, sum, median;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%d",&n);
        for(i=0; i<n;i++)
            scanf("%d", &str[i]);
        sort(str,str+i);
        median = str[i/2];
        sum=0;
        for(j=0; j<n;j++)
        {
            sum+=abs(median - str[j]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
