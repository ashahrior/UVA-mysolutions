#include<stdio.h>
int main()
{
    int n, h[105];
    int i, c=0, sum, avrg, sumz;
    while(scanf("%d", &n)==1 && n!=0)
    {
        sum = 0;
        sumz = 0;
        c++;
        for(i=0; i<n; i++)
        {
            scanf("%d", &h[i]);
            sum = sum + h[i];
        }
        avrg = sum / n;
        for(i=0; i<n; i++)
        {
            if(h[i]>avrg)
            {
                sumz = sumz + (h[i]-avrg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n", c, sumz);
    }
    return 0;
}
