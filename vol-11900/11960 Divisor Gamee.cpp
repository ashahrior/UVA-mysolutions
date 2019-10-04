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
#define M 1000000
lolo numdv[M+3], fol[M+3];
void div();
int main()
{
    div();
    lolo t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<fol[n]<<endl;
    }
    return 0;
}
void div()
{
    lolo i, j;
    for(i=0; i<=M; i++)
        numdv[i] = 1;
    for(i=2; i<=M; i++)
    {
        numdv[i]++;
        for(j=i+i; j<=M; j+=i)
            numdv[j]++;
    }
    fol[1] = 1;
    for(i=2; i<=M; i++)
    {
        if(numdv[i]>=numdv[fol[i-1]])
            fol[i] = i;
        else fol[i] = fol[i-1];
    }
    return;
}
