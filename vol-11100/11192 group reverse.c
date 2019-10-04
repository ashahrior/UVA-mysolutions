#include<stdio.h>
#include<string.h>
int main()
{
    char str[111];
    int a, x, n, i, j, len;
    while(scanf("%d",&n)==1 &&n!=0)
    {
        scanf(" ");
        gets(str);
        len = strlen(str);
        x = len / n;
        for(i=1; i<=n; i++)
        {
            a=i*x-1;
            for(j=a; j>=x*i-x ;j--)
            {
                printf("%c",str[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
