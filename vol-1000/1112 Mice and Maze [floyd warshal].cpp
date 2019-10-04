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
#define I_INF INT_MAX
#define L_INF LONG_LONG_MAX

// Floyd Warshal Algorithm

int main()
{
    int t;
    cin >> t;
    bool flag = false;
    while ( t-- )
    {
        if ( flag ) cout << endl;
        flag = true;
        int nodes, exitt, mtime, cs;
        cin >> nodes >> exitt >> mtime >> cs;
        int edges[nodes + 2][nodes + 2];
        memset ( edges, 63, sizeof ( edges ) );
        for ( int i = 0; i < cs; i++ )
        {
            int x, y, cst;
            cin >> x >> y >> cst;
            edges[x][y] = cst;
        }
        for ( int k = 0; k <= nodes; k++ )
        {
            for ( int i = 0; i <= nodes; i++ )
            {
                for ( int j = 0; j <= nodes; j++ )
                {
                    edges[i][j] = min ( edges[i][j], edges[i][k] + edges[k][j] );
                }
            }
        }
        int countt = 0;
        for ( int i = 0 ; i <= nodes; i++ )
        {
            if ( edges[i][exitt] <= mtime || ( i == exitt ) )
                countt++;
        }
        cout << countt << endl;
    }
    return 0;
}

/**
Sample Input
2

4
2
1
8
1 2 1
1 3 1
2 1 1
2 4 1
3 1 1
3 4 1
4 2 1
4 3 1

4
2
1
8
1 2 1
1 3 1
2 1 1
2 4 1
3 1 1
3 4 1
4 2 1
4 3 1

Sample Output
3

3
*/
