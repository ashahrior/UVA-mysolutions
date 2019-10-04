#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

int main()
{
    write();
    int i, t;
    cin>>t;
    getchar();
    for(int c=1; c<=t; c++)
    {
        string str;
        gl(str);
        int sz = str.size();
        string str2="";
        for(i = 0; i<sz; i++)
        {
            if(str[i]>='a' && str[i]<='z')
                str2+=str[i];
        }
        string str3 = str2;
        reverse(str3.begin(), str3.end());
        if(str3!=str2)
        {
            pf("Case #%d:\nNo magic :(\n", c);
            continue;
        }
        sz = str2.size();
        int sq = sqrt(sz);
        if(sq*sq!=sz)
            pf("Case #%d:\nNo magic :(\n", c);
        else
            pf("Case #%d:\n%d\n", c, sq);
    }
    return 0;
}

/**
3
sator arepo tenet opera rotas
this sentence is, quite clearly, not a magic square palindrome! but then again, you never know...
muse sun, eve.s e(y)es even use sum.
*/
