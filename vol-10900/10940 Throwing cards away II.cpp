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

#define sizee 500001
int ara[sizee];

void precal()
{
    int i = 1;
    ara[1] = 1, ara[2] = 2, ara[3] = 2, ara[4] = 4;
    int c = 2;
    for(i=5; i<sizee; i++)
    {
        ara[i] = c;
        c+=2;
        if(i==ara[i])
            c = 2;
    }
}

int main()
{
    //write();
    precal();
    int n;
    while(sf("%d", &n)==1)
    {
        if(!n) break;
        pf("%d\n", ara[n]);
    }
    return 0;
}

