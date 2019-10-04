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

int main()
{
    int b, n;
    while(cin>>b>>n)
    {
        if(!b && !n)
            break;
        int i, acc[b+5];
        for(i=0; i<b; i++)
            cin>>acc[i];
        bool flag=1;
        int d, c, v;
        for(i=0; i<n; i++)
        {
            cin>>d>>c>>v;
            acc[d-1]-= v;
            acc[c-1]+= v;
        }
        for(i=0; i<b; i++)
        {
            if(acc[i]<0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            cout<< "S"<<endl;
        else cout<< "N"<<endl;
    }
    return 0;
}

/**
Sample Input
3 3
1 1 1
1 2 1
2 3 2
3 1 3
3 3
1 1 1
1 2 1
2 3 2
3 1 4
3 3
1 1 1
1 2 2
2 3 2
3 1 2
0 0

Sample Output
S
N
S
*/
