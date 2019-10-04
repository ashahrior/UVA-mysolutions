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
    int n, cs = 1;
    while ( cin >> n )
    {
        string str[n + 1];
        map <string, int> mp1;
        map <int, string> mp2;
        for ( int i = 0; i < n; i++ )
        {
            cin >> str[i];
            mp1[str[i]] = i + 1;
            mp2[i + 1] = str[i];
        }

        int t;
        cin >> t;
        vector <int> v[n + 1];
        int indg[n + 1];
        mset ( indg, 0 );
        while ( t-- )
        {
            string x, y;
            cin >> x >> y;
            indg[mp1[y]]++;
            v[mp1[x]].push_back ( mp1[y] );
        }

        vector<int> lis;
        bool taken[n + 1];
        mset ( taken, 0 );
        for ( int i = 1; i <= n; i++ )
        {
            for ( int j = 1; j <= n ; j++ )
            {
                if ( !indg[j] && !taken[j] )
                {
                    taken[j] = 1;
                    lis.push_back ( j );
                    int sz = v[j].size();
                    for ( int k = 0; k < sz; k++ )
                        indg[v[j][k]]--;
                    break;
                }
            }
        }
        printf ( "Case #%d: Dilbert should drink beverages in this order:", cs++ );
        int sz = lis.size();
        for ( int i = 0 ; i < sz; i++ )
        {
            int tmp = lis[i];
            printf ( " " );
            cout << mp2[tmp];
        }
        cout << "." << endl << endl;
    }
    return 0;
}

/**
Sample Input
3
vodka
wine
beer
2
wine vodka
beer wine

5
wine
beer
rum
apple-juice
cachaca
6
beer cachaca
apple-juice beer
apple-juice rum
beer rum
beer wine
wine cachaca

10
cachaca
rum
apple-juice
tequila
whiskey
wine
vodka
beer
martini
gin
11
beer whiskey
apple-juice gin
rum cachaca
vodka tequila
apple-juice martini
rum gin
wine whiskey
apple-juice beer
beer rum
wine vodka
beer tequila

Sample Output
Case #1: Dilbert should drink beverages in this order: beer wine vodka.
Case #2: Dilbert should drink beverages in this order: apple-juice beer wine rum cachaca.
Case #3: Dilbert should drink beverages in this order: apple-juice wine vodka beer rum cachaca tequila whiskey martini gin.
*/
