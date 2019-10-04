#include<stdio.h>
#include<string.h>
int main()
{
    long long int i, j, len, n;
    char s[10000];
    while(gets(s))
    {
        len = strlen(s);
        n=-1;
        for(i=0; i<len; i++)
        {
            if(s[i]==' ')
            {
                for(j=i-1; j>n; j--)
                {
                    printf("%c", s[j]);
                }
                printf(" ");
                n=i;
            }
        }
        for(i=len-1; i>n; i--)
        {
            printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}
