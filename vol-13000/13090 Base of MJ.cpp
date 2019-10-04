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
#define sortt(a,n) sort(a,a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

int main()
{
    int t;
    cin>>t;
    for(int c = 1; c<=t ; c++)
    {
        lolo num, d;
        cin>>num>>d;
        lolo ans;
        ans = (num-1)/d;
        pf("Case %d: %lld\n", c, ans);
    }
    return 0;
}

/**
int main() /// TLE
{
    int t;
    cin>>t;
    for(int c = 1; c<=t; c++)
    {
        string str;
        lolo base;
        cin>>str>>base;
        int sz = str.size();
        stringstream ss(str);
        lolo num;
        ss>>num;
        lolo count = 0;
        for(int i=1; i<=num; i++)
        {
            lolo k = 0;
            lolo sum = 0;
            for(int j=sz-1; j>=0; j--)
            {
                int dg = str[j] - 48;
                sum+= ((lolo)pow(i,k))*dg;
                //pf("sum = %lld --- i = %d --- k = %d --- dg = %d\n", sum, i, k, dg);
                k++;
            }
            if(sum%base==0)
            {
                count++;
                //cout<<sum<<endl;
            }
        }

        pf("Case %d: ", c);
            cout<<count<<endl;
    }
    return 0;
}*/


/**
Sample Input
2
10 3
20 3
Sample Output
Case 1: 3
Case 2: 6
*/
