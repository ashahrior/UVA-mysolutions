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
    int n, c=0;
    while(cin>>n &&n)
    {
        pf("Case %d: ", ++c);
        cout<<n/2<<endl;
    }
    return 0;
}

/**
Sample Input
4
0
Sample Output
Case 1: 2
*/
