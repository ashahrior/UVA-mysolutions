#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[10010];
    int i, j, k, r2, len, t;
    double r1;
    scanf("%d",&t);
    scanf("\r");
    for(i=1;i<=t;i++)
    {
        gets(str);
        len = strlen(str);
        r1 = sqrt(len);
        r2 = sqrt(len);
        if(r1==r2)
        {
            for(j=0; j<r2; j++)
            {
                for(k=j; k<len; k=k+r2)
                {
                    printf("%c",str[k]);
                }
            }
            printf("\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    return 0;
}
