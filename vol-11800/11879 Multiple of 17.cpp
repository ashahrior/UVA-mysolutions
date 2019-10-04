#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[1005];
    int i, j, sum, rem;
    while(gets(s))
    {
        if(strcmp(s,"0")==0)
            break;
        j=strlen(s);
        sum = rem = 0;
        for(i=0; i<j; i++)
        {
            sum = rem*10+(s[i]-'0');
            rem = sum%17;
        }
        if(rem==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
