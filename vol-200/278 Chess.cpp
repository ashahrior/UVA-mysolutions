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

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        char str[100];
        gets(str);
        int m, n, ans;
        char c;
        sscanf(str, "%c %d %d", &c, &m, &n);
        switch(c)
        {
        case 'r':
        case 'Q':
            cout<<min(m,n)<<endl;
            break;
        case 'k':
            ans = ((m*n)+1)/2;
            cout<<ans<<endl;
            break;
        case 'K':
            ans = (((m+1)/2) * ((n+1)/2));
            cout<<ans<<endl;
            break;
        }
    }
    return 0;
}

/**

strcpy( dtm, "Saturday March 25 1989" );
sscanf( dtm, "%s %s %d  %d", weekday, month, &day, &year );

Sample Input
2
r 6 7
k 8 8
Sample Output
6
32
*/

