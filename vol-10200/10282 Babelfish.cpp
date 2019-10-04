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
    int i=0;
    string sen, word, str[2];
    map <string , string> mp;
    mp.clear();
    while(1)
    {
        //cin>>eng>>str;
        gl(sen);
        if(sen.size()==0)
            break;
        i=0;
        stringstream ss(sen);
        while(ss>>word)
            str[i++] = word;
        mp[str[1]] = str[0];
    }
    /*map < string, string > :: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
        cout<< (*it).first<< " "<< (*it).second<<endl;*/
    while(cin>>word)
    {
        if(mp.count(word)>0)
            cout<<mp[word]<<endl;
        else cout<< "eh\n";
    }
    return 0;
}

/**
Sample Input
dog ogday
cat atcay
pig igpay
froot ootfray
loops oopslay

atcay
ittenkay
oopslay

Sample Output
cat
eh
loops
*/
