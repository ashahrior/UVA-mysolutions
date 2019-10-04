#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i, l;
    while(gets(s))
    {
        l = strlen(s);
        for(i=0; i<l; i++)
        {
            printf("%c", s[i]-7);
        }
        printf("\n");
    }
    return 0;
}
