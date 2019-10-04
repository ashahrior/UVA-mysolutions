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
    int x, y;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        int dif = y- x;
        int steps=0;
        if(dif)
        {
            int sum = 0, d = 2;
            while(sum<dif)
            {
                sum+=(d/2);
                steps++, d++;
            }
        }
        cout<<steps<<endl;
    }
    return 0;
}
