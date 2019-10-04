#include<bits/stdc++.h>
using namespace std;
#define MAX 1010
unsigned int stat[MAX];
unsigned int primes[200];
unsigned int pcounter[MAX];

int main()
{
    unsigned int num, c, i, j, mid1, mid2, total, x, limit, countt;

    unsigned int sq; /// sieve starts here
    stat[0]=1;
    for(i=4; i<=MAX; i+=2) stat[i] = 1;
    sq = sqrt(MAX);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i]==0)
        {
            for(j=2*i; j<=MAX; j+=i)
                stat[j]=1;
        }
    }

    unsigned int count=0; /// prime listing starts here
    j=1;
    for(i=1; i<=MAX; i++)
    {
        if(stat[i]==0)
        {
            primes[j++] = i ;
            count++;
            pcounter[i] = count;
        }
        else
            pcounter[i] = count;
    }
    /// pre-calculation ends
    while(cin>>num>>c)
    {
        countt = pcounter[num];
        total = c*2;
        if(countt%2==0 && (countt>total))
        {
            mid1 = countt/2;
            mid2 = mid1+1;
            i= mid1-c+1;
            limit = mid2+c-1;
            cout<<num<<" "<<c<<":";
            for(x=i; x<=limit; x++)
                cout<<" "<<primes[x];
            cout<<endl<<endl;
        }
        else if(countt%2!=0 && (countt > (total - 1) ) )
        {
            mid1 = countt/2+1;
            i= mid1 - c + 1;
            limit = mid1 + c - 1;
            cout<<num<<" "<<c<<":";
            for(x=i; x<=limit; x++)
                cout<<" "<<primes[x];
            cout<<endl<<endl;
        }
        else
        {
            cout<<num<<" "<<c<<":";
            for(i=1; i<=num; i++)
            {
                if(stat[i]==0)
                    cout<<" "<<i;
            }
            cout<<endl<<endl;
        }
    }
    return 0;
}

/*cout<<"PRIMES LIST"<<endl;
    for(i=1; i<j; i++)
        cout<<i<<" "<<primes[i]<<endl;
    cout<<endl;
    cout<<"PRIME RANGE LIST"<<endl;
    for(i=1; i<=MAX; i++)
        cout<<i<<" "<<pcounter[i]<<endl;
    cout<<endl;
    cout<<'\n'<<j<<endl;*/
