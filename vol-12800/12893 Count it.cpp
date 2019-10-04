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
    long long t;
    scanf("%lld", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        /*if(n==1)
        {
            cout<<1<<endl;
            continue;
        }*/
        long long sum = 0;
        while(1)
        {
            if(n==1)
            {
                sum++;
                break;
            }
            else if(n==2)
            {
                sum++;
                break;
            }
            else if(n==3)
            {
                sum+=2;
                break;
            }
            if(n%2)
            {
                sum++;
                n = (n-1)/2;
            }
            if(n%2==0)
            {
                n/=2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

/**
Sample Input
3
4
5
6
Sample Output
1
2
2
*/

