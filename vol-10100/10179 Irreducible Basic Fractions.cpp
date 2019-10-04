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
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
LL phi(LL n)
{
    LL a = n;
    for(LL i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;
            a-=a/i;
        }
    }
    if(n>1)
        a-=a/n;
    return a;
}
int main()
{
    LL n;
    while(cin>>n &&n)
    {
        LL r = phi(n);
        cout<<r<<endl;
    }
    return 0;
}

/**
Sample Input
7
12
0
Sample Output
6
4
*/

