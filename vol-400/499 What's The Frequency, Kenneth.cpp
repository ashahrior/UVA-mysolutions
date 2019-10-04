#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[1000], f[1000];
    int i, n, j, len, maxx;
    while(gets(str))
    {
        for(i=0; i<52; i++) f[i] = 0;
        maxx=0;
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
                f[str[i]-65]++;
            else if(str[i]>='a' && str[i]<='z')
                f[str[i]-71]++;
        }
        for(i=0; i<52; i++)
        {
            if(f[i]>maxx)
                maxx=f[i];
        }
        for(i=0; i<26; i++)
        {
            if(maxx==f[i])
                printf("%c",i+65);
        }
        for(i=26; i<52; i++)
        {
            if(maxx==f[i])
                printf("%c", i+71);
        }
        printf(" %d\n",maxx);
    }
    return 0;
}
