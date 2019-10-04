#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define mset(a) memset(a,-1,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
string check(char c, string str);
int i, sz, sz2;
int main()
{
    string str, output;
    char c;
    while(cin>>c>>str)
    {
        sz = str.size();
        if(c=='0' && sz==1 && str[0]=='0')
            break;
        output = check(c,str);
        cout<<output<<endl;
    }
    return 0;
}

string check(char c, string str)
{
    string val="", solve="";
    for(i=0; i<sz; i++)
    {
        if(str[i]!=c)
            val+=str[i];
    }
    sz2 = val.size();
    for(i=0; i<sz2; i++)
    {
        if(val[i]!='0')
            break;
    }
    if(i==sz2)
        return "0";
    else
    {
        for(;i<sz2;i++)
            solve+=val[i];
        return solve;
    }
}
/**
Sample Input
5 5000000
3 123456
9 23454324543423
9 99999999991999999
7 777
0 0
Sample Output
0
12456
23454324543423
1
0
*/
