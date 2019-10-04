#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    //freopen("in.txt", "r", stdin);
    string str;
    lolo t, c, i, sum, count;
    cin>>t;
    getchar();
    for(c=1; c<=t; c++)
    {
        sum=count=0;
        getline(cin,str);
        lolo sz = str.size();
        for(i=0; i<sz; i++)
        {
            if(str[i]=='-' && ((str[i+1]!='B' && str[i+2]!='B') && (str[i+1]!='S' && str[i-1]!='S')) )
                count++;
        }
        printf("Case %lld: %lld\n", c, count);
    }
    return 0;
}
