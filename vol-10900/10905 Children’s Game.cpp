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
bool comp(string x, string y)
{
    string a = x+y;
    string b = y+x;
    if(a>b)
        return true;
    else return false;
}
int main()
{
    int n, i;
    string str[60];
    while(cin>>n &&n)
    {
        for(i=0; i<n; i++)
            cin>>str[i];
        sort(str,str+n,comp);
        for(i=0; i<n; i++)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}

/**
Sample Input
4
123 124 56 90
5
123 124 56 90 9
5
9 9 9 9 9
0
Sample Output
9056124123
99056124123 /******
99999
*/
