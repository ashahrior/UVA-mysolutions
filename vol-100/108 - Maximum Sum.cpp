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

int n, L, R, curr_sum, max_sum;
int ara[101][101];
int result[101];

void kadane(int ara[])
{
    int max_all, max_now;
    max_all = max_now = 0;

    for(int i = 0; i<n; i++)
    {
        max_now = max(0,max_now + ara[i]);

        max_all = max(max_now,max_all);
    }
    curr_sum = max(max_all,0);

    max_sum = max(curr_sum,max_sum);

    return;
}

void solve()
{
    for(int L = 0; L<n; L++)
    {
        memset(result,0,sizeof(result));
        for(int R=L; R<n; R++)
        {
            for(int i = 0; i<n; i++)
                result[i] = result[i] + ara[i][R];
            kadane(result);
        }
    }
    cout<<max_sum<<endl;
    return;
}

int main()
{

    while(cin>>n)
    {
        memset(ara,0,sizeof(ara));
        L = R = curr_sum = max_sum = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
                cin>>ara[i][j];
        }
        solve();
    }
    return 0;
}

/**
4
0 -2 -7 0
9 2 -6 2
-4 1 -4 1
-1 8 0 -2
*/
