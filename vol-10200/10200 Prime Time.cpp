#include<bits/stdc++.h>             /// Rank : 144
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

#define MAX 1000000
#define M 10005
bool stat[MAX];
vector <LL> primes;
bool form[M];

void sieve()
{
    mset(stat,true);
    lolo i, j, sq;
    stat[0]=stat[1]=false;
    for(i=4; i<=MAX; i+=2) stat[i] = false;
    sq = sqrt(MAX);
    for(i=3; i<=sq; i+=2)
    {
        if(stat[i])
        {
            for(j=i*i; j<=MAX; j+=i+i)
                stat[j]=false;
        }
    }
    primes.clear();
    primes.pb(2);
    for(i=3; i<=MAX; i+=2)
    {
        if(stat[i])
            primes.pb(i);
    }
    return;
}
bool isprime(LL num)
{
    if(num<MAX)
        return stat[num];

    lolo index = 0;
    while(primes[index]*primes[index]<=num)
    {
        if(num%primes[index]==0)
            return false;
        index++;
    }
    return true;
}
void formula()
{
    LL i, num;
    mset(form,false);
    for(i=0; i<=M; i++)
    {
        num = i*i + i +41;
        if(isprime(num))
            form[i] = true;
    }
    return;
}

int main()
{
    //read();
    //write();
    sieve();
    formula();
    int small, big, i;
    while(cin>>small>>big)
    {
        if(big<small)
            swap(big,small);
        int count=0;
        for(i=small; i<=big; i++)
        {
            if(form[i])
                count++;
        }
        pf("%.02lf\n", (count * 100.0) / (double)(big - small + 1) + 1e-9 );
    }
    return 0;
}
/**
#include<bits/stdc++.h> /// Rank : 81
#define N 1000000
using namespace std;

bool mark [N];
vector <int> primeList;

void sieve ()
{
    memset (mark, true, sizeof (mark));
    mark [0] = mark [1] = false;

    for ( int i = 4; i < N; i += 2 )
        mark [i] = false;

    for ( int i = 3; i * i <= N; i++ ) {
        if ( mark [i] ) {
            for ( int j = i * i; j < N; j += 2 * i )
                mark [j] = false;
        }
    }

    primeList.clear ();
    primeList.push_back (2);

    for ( int i = 3; i < N; i += 2 ) {
        if ( mark [i] )
            primeList.push_back (i);
    }

    //printf ("%d\n", primeList.size ());
}

bool isPrime (int n)
{
    if ( n < N ) return mark [n];

    int index = 0;

    while ( primeList [index] * primeList [index] <= n ) {
        if ( n % primeList [index] == 0 ) return false;
        index++;
    }

    return true;
}

int main ()
{
    sieve ();

    bool save [10000 + 10];
    memset (save, false, sizeof (save));

    for ( int i = 0; i <= 10000; i++ ) {
        int num = i * i + i + 41;
        if ( isPrime (num) )
            save [i] = true;
    }

    int a, b;

    while (scanf ("%d %d", &a, &b) != EOF ) {
        int cnt = 0;
        for ( int i = a; i <= b; i++ ) {
            if ( save [i] ) cnt++;
        }

        printf ("%.2lf\n", (cnt * 100.0) / (double)(b - a + 1) + 1e-9);
    }

    return 0;
}
*/
