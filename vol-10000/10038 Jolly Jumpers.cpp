#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
    int num[3010], sum[3010];
    int i, n, l;
    while(scanf("%d",&n)==1)
    {
        l=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&num[i]);
        }
        for(i=0;i<n-1;i++)
        {
            sum[i] = abs(num[i+1]-num[i]);
        }
        sort(sum,sum+i);
        for(i=1;i<n;i++)
        {
            if(sum[i]==sum[i-1])
            {
                l=1;
                break;
            }
        }
        if(l!=0)
        {
            printf("Not jolly\n");
        }
        else
            printf("Jolly\n");
    }
    return 0;
}

