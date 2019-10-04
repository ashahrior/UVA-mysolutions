#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
bool stat[MAX];
bool emirp[MAX];
int main()
{
    unsigned int num, c, i, j, n, r, N;
    unsigned int sq; /// sieve starts here
    stat[0]=stat[1]=1;
    for(i=4; i<=MAX; i+=2) stat[i] = 1;
    sq = sqrt(MAX);
    for(i=3; i<=sq; i+=2)
    {
        if(!stat[i])
        {
            for(j=2*i; j<=MAX; j+=i)
                stat[j]=1;
        }
    }
    unsigned int count=0; /// emirps listing starts here
    for(i=1; i<=MAX; i++)
    {
        if(stat[i]==0)
        {
            n = i, num=0, r;
            while(n!=0)
            {
                r = n%10;
                num = num*10+r;
                n = n/10;
            }
            if(!stat[num] && num!=i)
            {
                emirp[i]=1;
            }
        }
    } /// pre-calculation ends
    while(cin>>N)
    {
        if(stat[N]==0)
        {
            if(emirp[N]==1)
                cout<<N<<" is emirp."<<endl;
            else
                cout<<N<<" is prime."<<endl;
        }
        else
            cout<<N<<" is not prime."<<endl;
    }
    return 0;
}
