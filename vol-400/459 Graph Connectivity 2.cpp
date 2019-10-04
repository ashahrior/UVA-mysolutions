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

#define N 222

int djs;
int par[N];
int rankk[N];

void makeset(int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        par[i] = i;
        rankk[i] = 0;
    }
    djs = n;
}

int FINDD(int x)
{
    if(x!=par[x])
        par[x] = FINDD(par[x]);
    return par[x];
}

bool checksame(int x, int y)
{
    if(FINDD(x)==FINDD(y))
        return 1;
    else return 0;
}

void LINKK(int x, int y)
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
        djs--;
    }
}

void UNIONN(int x, int y)
{
    LINKK(FINDD(x), FINDD(y));
}

int main()
{
    int t, i, n;
    cin>>t;
    getchar();
    bool blank = false;
    while(t--)
    {
        mset(par,0);
        mset(rankk,0);
        char c;
        c = getchar();
        getchar();
        makeset(c-'A'+1);
        char str[3];
        while(gets(str) && str[0])
        {
            UNIONN(str[0] - 'A', str[1] - 'A');
        }
        if(blank)
          cout<<endl;
        blank = true;
        cout<<djs<<endl;
    }
    return 0;
}
