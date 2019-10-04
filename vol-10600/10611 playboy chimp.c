#include<stdio.h>
int main()
{
    long long int ara[50000];
    long long int qr[50000];
    long long int i, j, n, h, l, big, small, count;
    scanf("%lld", &n);
    for(i=0; i<n; i++)
        scanf("%lld", &ara[i]);
    scanf("%lld", &h);
    for(i=0; i<h; i++)
        scanf("%lld",&qr[i]);
    for(i=0; i<h; i++)
    {
        count = 0;
        for(j=0; j<n; j++)
        {
            if(qr[i]>ara[j])
            {
                small = ara[j];
                count++;
            }
        }
        if(count==0)
            printf("X ");
        else
            printf("%lld ", small);
        count = 0;
        for(j=0; j<n; j++)
        {
            if(qr[i]<ara[j])
            {
                big = ara[j];
                count++;
                break;
            }
        }
        if(count==0)
            printf("X");
        else
            printf("%lld",big);
        printf("\n");
    }
    return 0;
}
