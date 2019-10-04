#include<stdio.h>
int main()
{
    char s[100];
    long long int i=0, j, k, l;
    while(gets(s))
    {
        i++;
        if(s[0]=='H')
        {
           printf("Case %lld: Hajj-e-Akbar\n",i);
        }
        else if(s[0]=='U')
        {
            printf("Case %lld: Hajj-e-Asghar\n",i);
        }
        else
        {
            break;
        }
    }
    return 0;
}
