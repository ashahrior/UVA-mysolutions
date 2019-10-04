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

int par[1000];
int rankk[1000];

void Makeset(int n)
{
    for(int i=0; i<n; i++)
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

bool checksame(int x, int y)
{
    if(FIND(x) == FIND(y))
        return 1;
    else return 0;
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
            if(rankk[x] == rankk[y])
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
        int n;
        cin>>n;
        while(getchar()!='\n');
        mset(par,0);
        mset(rankk,0);
        Makeset(n);
        int con, qr;
        con = qr = 0;
        char str[30];
        int x, y, val;
        char s;
        while(gets(str) && sscanf(str,"%c %d %d", &s, &x,&y)==3 )
        {
            if(s=='c')
            {
                UNION(x,y);s
            }
            else if(s=='q')
            {
                val = checksame(x,y);
                if(val)
                    con++;
                else qr++;
            }
        }
        cout<<con<<","<<qr<<endl;
        if(t)
            cout<<endl;
    }
    return 0;
}

/**
Sample Input
2
10
c 1 5
c 2 7
q 7 1
c 3 9
q 9 6
c 2 5
q 7 5
1
q 1 1
c 1 1
q 1 1
Sample Input
1,2
2,0
*/
