#include<bits/stdc++.h> /// after 4 RTEz, eventually realized (udebug) the bug, resolved it and got accepted.
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
int main()
{
    read();
    write();
    string st, str;
    while(cin>>st)
    {
        lolo sz, maxi, sum, i, val;
        sz = st.size();
        str = "";
        bool flag=false;
        for(i=0; i<sz; i++) /// checking for invalid character sequence
        {
            if(st[i]=='0' && !flag) /// one needs to consider the leading zeros
                continue;
            if((st[i]!='0' && st[i]!='+' && st[i]!='-') && !flag) /// and also leading + and - symbols
                flag=true;
            if( flag && st[i]!='+' && st[i]!='-' )
                str+= st[i];
        }
        if(!flag)
        {
            cout<<2<<endl;
            continue;
        }
        maxi = sum = 0;
        sz = str.size();
        for(i=0; i<sz; i++) /// doing the summing and finding the maximum value
        {
            if(str[i]>='a' && str[i]<='z')
            {
                sum+= (str[i] - 61);
                val = (str[i] - 61);
                if(maxi<val)
                    maxi = val;
            }
            else if(str[i]>='A' && str[i]<='Z')
            {
                sum+= (str[i] - 55);
                val = (str[i] - 55);
                if(maxi<val)
                    maxi = val;
            }
            else if(str[i]>='0' && str[i]<='9')
            {
                sum+= (str[i] - 48);
                val = (str[i] - 48);
                if(maxi<val)
                    maxi = val;
            }
        }
        while(1) /// generating result
        {
            if(sum%maxi==0)
            {
                maxi++;
                break;
            }
            maxi++;
        }
        if(maxi>62)
            cout<< "such number is impossible!\n";
        else
            cout<<maxi<<endl;
    }
    return 0;
}

/**
Sample Input
3
5
A
aab2
Sample Output
4
6
11
38
*/
