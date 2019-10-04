#include<stdio.h>
int main()
{
    int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
    int a, b, i, j, x, n, t;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        a0=0, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
        scanf("%d", &n);
        for(j=1; j<=n; j++)
        {
            x=j;
            while(x!=0)
            {
                if(x%10==0)
                    a0++;
                if(x%10==1)
                    a1++;
                if(x%10==2)
                    a2++;
                if(x%10==3)
                    a3++;
                if(x%10==4)
                    a4++;
                if(x%10==5)
                    a5++;
                if(x%10==6)
                    a6++;
                if(x%10==7)
                    a7++;
                if(x%10==8)
                    a8++;
                if(x%10==9)
                    a9++;
                x = x / 10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }
    return 0;
}
