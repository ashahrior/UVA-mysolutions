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
    string hrs;
    while(cin>>hrs)
    {
        lolo dh = (hrs[0]-48)*10+hrs[1]-48;
        lolo dm = (hrs[2]-48)*10+hrs[3]-48;
        lolo ds = (hrs[4]-48)*10+hrs[5]-48;
        lolo cc = (hrs[6]-48)*10+hrs[7]-48;
        //cout<<dh<< " "<< dm<< " "<< ds<< " "<< cc<<endl;
        lolo dt = dh*60*60*100 + dm*60*100 + ds*100 + cc;
        lolo r = (dt*10000000)/(8640000);
        pf("%07d\n",r);
    }
}

/**
Sample Input
00000000
23595999
12000000
14273467
02475901

Sample Output
0000000
9999998
5000000
6024846
1166552
*/
