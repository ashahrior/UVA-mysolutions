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

int main()
{
    //read();
    string str, ans="";
    set<string> v;
    set <string> :: iterator it;
    while(cin>>str)
    {
        int i;
        for(i=0;;i++)
        {
            if(isalpha(str[i]))
            {
                ans+=tolower(str[i]);
                continue;
            }
            if(str[i]=='-' && str[i+1]=='\0')
                break;
            if(str[i]=='-')
            {
                ans+='-';
                continue;
            }
            if(ans.size())
            {
                v.insert(ans);
                ans="";
            }
            if(str[i]=='\0')
                break;
        }
    }
    for(it = v.begin(); it!=v.end(); it++)
        cout<<(*it)<<endl;
    return 0;
}
