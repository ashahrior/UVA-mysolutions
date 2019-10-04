#include<bits/stdc++.h>
using namespace std;
#define lolo long long int
#define maxx 1000000
lolo flist[maxx];
lolo primes[maxx];
lolo stat[maxx];
lolo listsize;

void sieve()
{
    lolo i, j, sq;
    stat[0] = stat[1] = 1;
    for(i=4; i<=maxx; i+=2) stat[i]=1;
    sq = sqrt(maxx);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i]==0)
        {
            for(j=i*i; j<=maxx; j+=2*i)
                stat[j]=1;
        }
    }
}

void primez()
{
    lolo i, j=0;
    for(i=2; i<=maxx; i++)
    {
        if(stat[i]==0)
        {
            primes[j++] = i;
        }
    }
}

void primefactorize(lolo n)
{
    lolo i, sqrtn;
    listsize = 0;
    sqrtn = sqrt(n);
    for(i=0; primes[i]<=sqrtn; i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                flist[listsize] = primes[i];
                listsize++;
            }
        }
    }
    if(n>1)
    {
        flist[listsize] = n;
        listsize++;
    }
}

int main()
{
    lolo n, x, count;
    sieve();
    primez();
    while(scanf("%lld",&n)==1 &&n)
    {
        count = 0;
        if(n==1)
        {
            printf("1 : 0\n");
            continue;
        }
        primefactorize(n);
        printf("%lld : ",n);
        for(x=0; x<listsize; x++)
        {
            /*printf("%lld ",flist[x]);
            if(x<listsize-1)
                printf(" * ");*/
            if(flist[x]!=flist[x+1])
                count++;
        }
        printf("%lld",count);
        cout<<endl;
    }
    return 0;
}


/**
#include<bits/stdc++.h> /// this program is giving runtime error
using namespace std;
#define lolo long long int
#define maxx 1000000
///lolo flist[maxx];
///lolo primes[maxx];
vector <lolo> flist;
vector <lolo> primes;
bool stat[maxx];
lolo listsize;

void sieve()
{
    lolo i, j, sq;
    stat[0] = stat[1] = 1;
    primes.push_back(2);
    for(i=4; i<=maxx; i+=2)
        stat[i]=1;
    ///sq = sqrt(maxx);
    for(i=3; i<=maxx; i+=2)
    {
        if(!stat[i])
        {
            primes.push_back(i);
            for(j=i*i; j<=maxx; j+=2*i)
                stat[j]=1;
        }
    }
}

void primefactorize(lolo n)
{
    lolo i, sqrtn;
    listsize = 0;
    flist.clear();
    sqrtn = sqrt(n);
    for(i=0; primes[i]<=sqrtn; i++)
    {
        if(n%primes[i]==0)
        {
            while(n%primes[i]==0)
            {
                n/=primes[i];
                ///flist[listsize] = primes[i];
                flist.push_back(primes[i]);
                ///listsize++;
            }
        }
    }
    if(n>1)
    {
        ///flist[listsize] = n;
        ///listsize++;
        flist.push_back(n);
    }
    listsize = flist.size();
}

int main()
{
    lolo n, x, count;
    sieve();
    while(cin>>n &&n)
    {
        count=1;
        if(n==1)
        {
            cout<<"1 : 0\n";
            continue;
        }
        primefactorize(n);
        cout<<n<< " : ";
        for(x=0; x<listsize-1; x++)
        {
            //printf("%lld ",flist[x]);
            //if(x<listsize-1)
                //printf(" * ");
            if(flist[x]!=flist[x+1])
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

**/
