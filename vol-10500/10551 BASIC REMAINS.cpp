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

lolo base_decimal(int bs, string vajok)
{
    lolo sz = vajok.size();
    lolo i, p = 0, sum = 0, n;
    for(i=sz-1; i>=0; i--)
    {
        sum += ( long(pow(bs,p)) * (vajok[i]-48));
        p++;
    }
    return sum;
}

string decimal_base(lolo sum, int bs)
{
    lolo n = sum;
    string str="";
    str += (n%bs+48);
    n/=bs;
    while(n!=0)
    {
        str += (n%bs+48);
        n/=bs;
    }
    rev(str);
    return str;
}

int main()
{
    int bs;
    while(cin>>bs)
    {
        if(!bs) break;
        string vajjo, vajok;
        cin>>vajjo>>vajok;
        lolo rem = base_decimal(bs,vajok);
        lolo i, sum=0, sz = vajjo.size();
        for(i=0; i<sz; i++)
        {
            sum *= bs;
            sum += (vajjo[i]-48);
            sum = sum % rem;
        }
        string ans = decimal_base(sum,bs);
        cout<<ans<<endl;
    }
    return 0;
}

/**
Sample Input
2 1100 101
10 123456789123456789123456789 1000
0
Sample Output
10
789
*/

