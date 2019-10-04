#include<stdio.h>
#include<math.h>
int main()
{
    int i, j, k, sq1, sq2, l, n, yes, count1, count2, x, m;
    while(scanf("%d", &n)==1 &&n!=0)
    {
        yes=0;
        for(i=2; i<=n/2; i++)
        {
            m=i;
            count1=0;
            sq1 = sqrt(m);
            for(j=2; j<=sq1; j++)
            {
                if(m%j==0)
                {
                    count1++;
                    break;
                }
            }
            if(count1==0)
            {
                x=n-m;
                count2=0;
                sq2 = sqrt(x);
                for(j=2; j<=sq2;j++)
                {
                    if(x%j==0)
                    {
                        count2++;
                        break;
                    }
                }
                if(count2==0)
                {
                    yes++;
                }
            }
        }
        printf("%d\n",yes);
    }
    return 0;
}
