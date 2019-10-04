#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[50];
    int step[111];
    int i, j, s, n, t, sum;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        sum=0;
        scanf("%d",&n);
        scanf("\r");
        for(j=1; j<=n; j++)
        {
            scanf("%s",str);
            if(strcmp(str,"LEFT")==0)
            {
                sum+=-1;
                step[j]=-1;
            }
            else if(strcmp(str,"RIGHT")==0)
            {
                sum+=1;
                step[j]=1;
            }
            else
            {
                scanf("%s %d",str,&s);
                sum+=step[s];
                step[j] = step[s];
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
