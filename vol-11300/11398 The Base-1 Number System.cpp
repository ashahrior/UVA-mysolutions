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

bool flag;
double binary_decimal(string num)
{
    rev(num);
    int i, sz = num.size();
    double sum=0;
    for(i=0; i<sz; i++)
    {
        if(num[i]=='1')
            sum+= pow(2,i);
    }
    return sum;
}

int main()
{
    string str, num;
    while(cin>>str)
    {
        if(str=="~")
            break;
        num="", flag=1;
        int i;
        while(str!="#")
        {
            int sz = str.size();
            if(sz==1)
                flag = 1;
            else if(sz==2)
                flag=0;
            else
            {
                for(i=2; i<sz; i++)
                {
                    if(flag)
                        num+='1';
                    else num+='0';
                }
            }
            cin>>str;
        }
        lolo val = binary_decimal(num);
        cout<<val<<endl;
    }
    return 0;
}
