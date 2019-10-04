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

int coins[] = { 1, 5, 10 , 25, 50 };

lolo ways[7501];

void changes()
{
    int i, j, k;
    ways[0] = 1;
    for(i=0; i<5; i++)
    {
        for(j=coins[i], k=0; j<=7500; j++, k++)
            ways[j] += ways[k];
    }
    return;
}

int main()
{
    changes();
    int n;
    while(cin>>n)
    {
        cout<<ways[n]<<endl;
    }
    return 0;
}

/**
Sample Input
11
26
Sample Output
4
13
*/
