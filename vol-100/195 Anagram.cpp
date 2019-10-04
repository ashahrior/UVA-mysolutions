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

bool comparator(char a, char b)
{
    if(tolower(a)==tolower(b))
        return a<b;
    return tolower(a)<tolower(b);
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char str[1000];
        cin>>str;
        int sz = strlen(str);
        sort(str,str+sz, comparator);
        cout<<str<<endl;
        while(next_permutation(str,str+sz,comparator))
        {
            cout<<str<<endl;
        }
    }
    return 0;
}
