#include<stdio.h>
int main()
{
    int c, i, j, n, sum, ara[1000];
    float count, num, avrg, ab_avrg;
    scanf("%d", &c);
    for(i=1; i<=c; i++)
    {
        count=0;
        sum = 0;
        scanf("%d", &n);
        num = n;
        for(j=0; j<n; j++)
        {
            scanf("%d", &ara[j]);
            sum = sum + ara[j];
        }

        avrg = sum / num;
        for(j=0; j<n; j++)
        {
            if(avrg<ara[j])
            {
                count++;
            }
        }
        ab_avrg = (count/num)*100;
        printf("%.3f%%\n", ab_avrg);
    }
    return 0;
}
