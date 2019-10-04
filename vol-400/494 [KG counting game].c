#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int i, j, k, sp=32, l;
    while(gets(s))
    {
        j=0;
        l = strlen(s);
        for(i=0; i<l; i++)
        {
            if(((s[i]>='a' && s[i] <= 'z') || (s[i]>='A' && s[i] <= 'Z')) &&
                    (s[i+1]<'a' || s[i+1] > 'z') && (s[i+1]<'A' || s[i+1] > 'Z'))

            {
                j++;
            }
        }
        printf("%d\n", j);
    }
}
