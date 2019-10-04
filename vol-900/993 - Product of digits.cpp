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
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), :: tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), :: toupper)

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        lolo num;
        cin>>num;
        if(num==1)
        {
            cout<<1<<endl;
            continue;
        }
        int d = 9 , x=0;
        int ara[100];
        mset(ara,0);
        while(num!=1 && d!=1)
        {
            if(num%d==0)
            {
                ara[x++] = d;
                num /= d;
            }
            else d--;
        }
        if(num!=1)
        {
            cout<<-1<<endl;
            continue;
        }
        x--;
        for(int i=x; i>=0; i--)
            cout<<ara[i];
        cout<<endl;
    }
    return 0;
}

/**
Sample Input
3
1
10
123456789
Sample Output
1
25
-1
*/
