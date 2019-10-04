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

int n, sz;
string str;
int taken[50];
vector <char> v;
//map <string, int> mp;
void call(int start)
{
    if(v.size()==n)
    {
        //string st="";
        for(int j=0; j<n; j++)
            pf("%c",v[j]);
        /**
        v_sort(st);         //this method got TLE
        if(!mp[st])
        {
            cout<<st;
            mp[st]++;
            cout<<endl;
        }*/
        cout<<endl;
        return;
    }
    for(int i=start; i<sz; i++)
    {
        if(!taken[i])
        {
            taken[i] = 1;
            v.pb(str[i]);
            call(i+1);
            taken[i] = 0;
            v.pop_back();
        }
        while(str[i]==str[i+1]) i++; /// this line is for dealing with the same character input more than once
    }
}
int main()
{
    while(cin>>str>>n)
    {
        mset(taken,0);
        v.clear();
        //mp.clear();
        sz = str.size();
        v_sort(str);
        call(0);
    }
    return 0;
}


/**
Sample Input
abcde 2
abcd 3
aba 2
Sample Output
ab
ac
ad
ae
bc
bd
be
cd
ce
de
abc
abd
acd
bcd
aa
ab
*/
