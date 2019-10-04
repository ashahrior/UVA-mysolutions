#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    while ( cin >> n >> l )
    {
        if ( !n && !l )
            break;

        int t = l;
        vector <int> v[n + 2];
        int indg[n + 2];
        vector<int> lis;
        memset ( indg, 0, sizeof ( indg ) );

        while ( t-- )
        {
            int x, y;
            cin >> x >> y;
            v[x].push_back ( y );
            indg[y]++;
        }

        queue <int> q;

        for ( int i = 1; i <= n; i++ )
        {
            if ( !indg[i] )
                q.push ( i );
        }

        while ( !q.empty() )
        {
            int f = q.front();
            q.pop();
            lis.push_back ( f );
            int sz = v[f].size();
            for ( int i = 0; i < sz; i++ )
            {
                indg[v[f][i]]--;
                if ( !indg[v[f][i]] )
                    q.push ( v[f][i] );
            }
        }
        int x = lis.size();
        if ( x != n )
        {
            cout << "IMPOSSIBLE" << endl;
            continue;
        }
        for ( int i = 0; i < x; i++ )
            cout << lis[i] << endl;

    }
    return 0;
}


/*
Sample Input
3 2
1 2
2 3
0 0

Sample Output
1
2
3
*/
