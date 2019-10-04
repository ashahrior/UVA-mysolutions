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

#define MAX 30005
int par[MAX];
int rankk[MAX];

void makeset(int n)
{
    for(int i=1; i<n; i++)
    {
        par[i] = i;
        rankk[i] = 0;
    }
}

int FIND(int x)
{
    if(x!=par[x])
        par[x] = FIND(par[x]);
    return par[x];
}

int checksame(int x, int y)
{
    return (FIND(x) == FIND(y));
}

void LINK(int x, int y)
{
    if(!checksame(x,y))
    {
        if(rankk[x]>rankk[y])
            par[y] = x;
        else
        {
            par[x] = y;
            if(rankk[x]==rankk[y])
                rankk[y] = rankk[y] + 1;
        }
    }
}

void UNION(int x, int y)
{
    LINK(FIND(x),FIND(y));
}

int main()
{
    //read();
    //write();
    int t;
    cin>>t;
    while(t--)
    {
        int m, n;
        cin>>n>>m;
        mset(par, 0);
        mset(rankk, 0);
        makeset(n+1);
        int x[m+1], y[m+1];
        for(int i=0; i<m; i++)
        {
            cin>>x[i]>>y[i];
            UNION(x[i], y[i]);
            //printf("par[%d] = %d . rank[%d] = %d\n", x[i], par[x[i]], x[i], rankk[x[i]]);
            //printf("par[%d] = %d . rank[%d] = %d\n", y[i], par[y[i]], y[i], rankk[y[i]]);
        }
        //cout<<endl;
        for(int i=1; i<=n; i++)
            par[i] = FIND(i);
        //for(int i=1; i<=n; i++)
            //printf("par[%d] = %d . rank[%d] = %d\n", i, par[i], i, rankk[i]);
        int counter[n+1];
        mset(counter,0);
        int mx=0;
        for(int i=1; i<=n; i++)
        {
            counter[par[i]]++;
            mx = max(mx, counter[par[i]]);
        }
        cout<<mx<<endl;
    }
    return 0;
}

/**
Sample Input
3
3 2
1 2
2 3
10 12
1 2
3 1
3 4
5 4
3 5
4 6
5 2
2 1
7 1
1 2
9 10
8 9
10 7
4 10
6 4
6 10
7 5
5 1
3 6
7 3
Sample Output
3
7
7
*/
