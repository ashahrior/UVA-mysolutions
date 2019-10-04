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
int main()
{
    int n, i, sum, c, a, b;
    while(cin>>n &&n)
    {
        priority_queue <int> pq;
        sum=c=0;
        for(i=0; i<n; i++)
            cin>>a, pq.push(-a);

        for(i=0; i<n-1; i++)
        {
            a = -pq.top();
            pq.pop();
            b = -pq.top();
            pq.pop();
            c=a+b;
            sum+=c;
            pq.push(-c);
        }
        cout<<sum<<endl;
    }
    return 0;
}
