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
#define gl getline

#define SIZE 10001000
lolo primes[1000000];
//vector <lolo> primes;
lolo factor(lolo n);
bool stat[SIZE] = {false} ;
lolo divcount, lastdiv, plim;

lolo sieve()
{
    lolo i, j, k;
    k=0;
    for(i=2; i<=SIZE; i++)
    {
        if(!stat[i])
        {
            primes[k++] = i;
            for(j=2; i*j<=SIZE; j++)
                stat[i*j]=1;
        }
    }
    return k;
}
/*lolo sieve()
{
    lolo i, j, k;
    for(i=2; i<=SIZE; i++)
    {
        if(!stat[i])
        {
            primes.pb(i); /// vector slows down the process a little
            for(j=2; i*j<=SIZE; j++)
                stat[i*j]=1;
        }
    }
    return primes.size();
}*/
int main()
{
    //read();
    //write();
    plim = sieve();
    lolo num;
    while(cin>>num &&num)
    {
        if(num<0)
            num*=(-1);
        divcount = 0, lastdiv = -1;
        lolo val = factor(num);
        if(val==1)
        {
            if(divcount>1)
                cout<< lastdiv<<endl;
            else
                cout<<-1<<endl;
        }
        else
        {
            if(divcount>0)
                cout<<val<<endl;
            else
                cout<<-1<<endl;
        }

    }
    return 0;
}
lolo factor(lolo n)
{
    lolo i, j, sq = sqrt(n);

    for(i=0; i<plim && n>1 && primes[i]<=n; i++)
    {
        if(n%primes[i]==0)
        {
            divcount++;
            while(n>1 && n%primes[i]==0)
            {
                n/=primes[i];
            }
            lastdiv = primes[i];
        }
        if(n==1)
            break;
    }
    return n;
}
