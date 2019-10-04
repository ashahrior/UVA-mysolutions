#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define mset(a) memset(a,-1,sizeof(a))
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
bool ara[105][105];
int n;
int row_sum(int i)
{
    int j, sum=0;
    for(j=0; j<n; j++)
        sum+=ara[i][j];
    return sum;
}
int col_sum(int i)
{
    int j, sum=0;
    for(j=0; j<n; j++)
        sum+=ara[j][i];
    return sum;
}
int main()
{
    //read();
    int i, j;
    while(cin>>n &&n)
    {
        mclr(ara);
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                cin>>ara[i][j];
        }
        int r_sum, c_sum, row, col;
        r_sum = c_sum = 0;
        int count1=0, count2=0;
        for(i=0; i<n; i++)
        {
            r_sum = row_sum(i);
            if(r_sum%2==1)
            {
                row = i;
                count1++;
            }
        }
        for(i=0; i<n; i++)
        {
            c_sum = col_sum(i);
            if(c_sum%2==1)
            {
                col = i;
                count2++;
            }
        }
        if(count1>1 || count2>1 || count1!=count2)
        {
            cout<< "Corrupt\n";
            continue;
        }
        else if(count1==1 && count2==1)
        {
            pf("Change bit (%d,%d)\n", row+1, col+1);
            continue;
        }
        else
            pf("OK\n");
    }
    return 0;
}

/**
Sample Input
4
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 0 1 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 1 1 0
1 1 1 1
0 1 0 1
0

Sample Output
OK
Change bit (2,3)
Corrupt
*/
