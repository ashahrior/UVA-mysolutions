#include<stdio.h>
int main()
{
    int i, j, min, max, x, n, MAX, count;
    while(scanf("%d %d", &i, &j)==2)
    {
        MAX=0;
        if(i<=j)
        {
            min=i, max=j;
        }
        else
        {
            max=i, min=j;
        }
        for(n=min; n<=max; n++)
        {
            x=n;
            count=1;
            for(;x!=1;count++)
            {
            //    count++;
                if(x%2!=0)
                {
                    x=3*x+1;
                }
                else
                {
                    x=x/2;
                }
            }
            if(count>=MAX)
            {
                MAX = count;
            }
        }
        printf("%d %d %d\n", i, j, MAX);
    }
    return 0;
}
