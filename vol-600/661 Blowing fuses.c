#include<stdio.h>
int main()
{
    int ops[1000], amps[1000];
    int n, op, m, i, x, max, sum, count=0;
    while(scanf("%d%d%d",&n,&op,&m)==3 &&(n!=0&&op!=0&&m!=0))
    {
        count++;
        sum=max=0;
        for(i=0; i<n; i++)
            scanf("%d",&amps[i]);

        for(i=0; i<op; i++)
            ops[i]=0;

        for(i=0; i<op; i++)
        {
            scanf("%d",&x);
            if(ops[x-1]==0)
            {
                sum+=amps[x-1];
                ops[x-1]=1;
            }
            else
            {
                sum-=amps[x-1];
                ops[x-1]=0;
            }
            if(max<sum)
                max=sum;
        }
        if(max>m)
        {
            printf("Sequence %d\nFuse was blown.\n\n", count);
        }
        else
        {
            printf("Sequence %d\n",count);
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n", max);
        }
    }
    return 0;
}
