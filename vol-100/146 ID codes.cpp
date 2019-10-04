#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[52];
    int l;
    while(gets(str))
    {
        if(str[0]=='#')
            break;
        l = strlen(str);
        if( next_permutation(str,str+l) )
            puts(str);
        else
            puts( "No Successor" );
    }
    return 0;
}
