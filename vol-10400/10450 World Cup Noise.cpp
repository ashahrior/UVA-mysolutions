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
lolo stat[100001];
void fibo()
{
    lolo i;
    stat[0] = 0, stat[1] = 2, stat[2] = 3, stat[3] = 5;
    for(i=4; i<=100000; i++)
    {
        stat[i] = stat[i-1] + stat[i-2];
    }
}

int main()
{
    //read();
    //write();
    fibo();
    lolo n, c, t;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        cin>>n;
        pf("Scenario #%lld:\n",c);
        cout<<stat[n]<<endl<<endl;
    }
    return 0;
}


/**
Sample Input
2
3
1
Sample Output
Scenario #1:
5
Scenario #2:
2
*/
