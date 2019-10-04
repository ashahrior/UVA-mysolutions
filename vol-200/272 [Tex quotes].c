#include<stdio.h>
#include<string.h>
int main()

{
    long long int i, len, x=0;
    char str[100000];
    while(gets(str))
    {
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i] == '"')
            {
                x++;
                if(x%2!=0)
                {
                    printf("``");
                }
                else
                {
                    printf("''");
                }
            }
            else
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
