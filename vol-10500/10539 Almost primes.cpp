#include<bits/stdc++.h>
using namespace std;
#define MAX 1000001
bool stat[MAX];
vector <long long int> primes;
vector <long long int> almost_primes;

int main()
{
    long long int t, i, j,  x, limit, low, up, countt, primes_size;

    /// sieve starts here
    stat[0]=stat[1]=1;
    primes.push_back(2);
    for(i=4; i<=MAX; i+=2)
        stat[i] = 1;
    for(i=3; i<=MAX; i+=2)
    {
        if(!stat[i])
        {
            primes.push_back(i);
            for(j=2*i; j<=MAX; j+=i)
                stat[j]=1;
        }
    }
    primes_size = primes.size();

    /// almost primes listing starts here
    for(i=0; i<primes_size; i++)
    {
        for(j = primes[i]*primes[i]; j < 1000000000000; j*=primes[i])
            almost_primes.push_back(j);
    }
    x = almost_primes.size();
    /// pre-calculation ends
    cin>>t;
    while(t--)
    {
        cin>>low>>up;
        countt=0;
        if(low>up)
            swap(low,up);
        for(i=0; i<x; i++)
        {
            if(almost_primes[i]>=low && almost_primes[i]<=up)
                countt++;
        }
        cout<<countt<<endl;
    }

    return 0;
}
