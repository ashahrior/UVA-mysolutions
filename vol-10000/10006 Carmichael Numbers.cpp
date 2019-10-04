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


#define M 65100
bool stat[M];
void sieve()
{
    lolo i, j, sq;
    for(i=4; i<=M; i+=2) stat[i] = 1;
    sq = sqrt(M);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i]==0)
        {
            for(j=i*i; j<=M; j+=i+i)
                stat[j]=1;
        }
    }
    stat[1]=1;
}
lolo bigmod(lolo base, lolo power, lolo mod)
{
    lolo c;
    if(power==0)
        return 1;
    if(power&1)
        return ( (base%mod) * ( bigmod(base, power-1, mod) ) )%mod;
    else
    {
        c = bigmod(base, power/2, mod);
        return (c*c)%mod;
    }
}
int main()
{
    sieve();
    int n;
    //while(cin>>n)
    while(sf("%d",&n))
    {
        if(!n) break;
        if(!stat[n])
        {
            //cout<<n<<" is normal."<<endl;
            pf("%d is normal.\n", n);
            continue;
        }
        int i, lim = n-1;
        bool flag=1;
        for(i=2; i<lim; i++)
        {
            lolo r = bigmod(i,n,n);
            if(r!=i)
            {
                flag = 0;
                break;
            }
        }
        if(!flag) pf("%d is normal.\n",n);
            //cout<<n<< " is normal."<<endl;
        else
            pf("The number %d is a Carmichael number.\n", n);
    }
    return 0;
}

/**
Sample Input
1729
17
561
1109
431
0
Sample Output
The number 1729 is a Carmichael number.
17 is normal.
The number 561 is a Carmichael number.
1109 is normal.
431 is normal.
*/
