#include<stdio.h>
int main()
{
    int i, k, l, j, m, n, d, x, y, count, notnice;
    int ara[10000];
    while(scanf("%d%d",&m,&n)==2)
    {
        notnice=0;
        d=n-m+1;
        for(i=m; i<=n; i++)
        {
            count=0;
            x=i;
            j=0;
            while(x!=0)
            {
                y=x%10;
                x=x/10;
                ara[j]=y;
                j++;
            }
            for(k=0; k<j; k++)
            {
                for(l=0; l<j; l++)
                {
                    if((k!=l) && (ara[k]==ara[l]))
                    {
                        count++;
                    }
                }
                if(count!=0)
                {
                    notnice++;
                    break;
                }
            }
        }
        printf("%d\n",d-notnice);
    }
    return 0;
}
