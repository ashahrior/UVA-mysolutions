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
    string in;
    while(cin>>in)
    {
        int i, j, k, sz = in.size();
        set <char> st;
        st.clear();
        for(i=0; i<sz; i++)
        {
            char c = in[i];
            st.insert(c);
        }
        int count = 0;
        count+=st.size();
        string a, b, c;
        map <string,int> mp;
        mp.clear();
        a="" , b="", c="";
        for(i=0; i<sz; i++)
        {
            a = in[i];
            for(j=sz-1; j>i; j--)
            {
                a = in[i], b = "", c = "";
                for(k=i+1; k<=j; k++)
                    b+=in[k];
                a = a + b;
                c = a;
                rev(c);
                if(c==a && !mp[a])
                {
                    count++;
                    mp[a] = 1;
                }
            }
        }
        cout<< "The string '" << in << "' contains " << count<< " palindromes." <<endl;
    }
    return 0;
}
