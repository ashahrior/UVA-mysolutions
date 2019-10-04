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
#define gl getline

string check_valid(string str)
{
    string num="";
    lolo sz = str.size(), z=0, i;
    bool flag=0;
    for(i=0; i<sz; i++)
    {
        if(str[i]=='0' && !flag)
        {
            z++;
            continue;
        }
        else if(str[i]!='0' && !flag)
            flag=1;
        num+=str[i];
    }
    if(z==sz)
        return "0";
    return num;
}

string addzero(string str, lolo m_sz)
{
    lolo i, k, x = str.size();
    if(x<m_sz)
    {
        string zero = "";
        k = m_sz - x;
        for(i=0; i<k; i++)
            zero+='0';
        str = zero + str;
    }
    return str;
}

string add(string a, string b)
{
    lolo m_sz = max(a.size(),b.size());
    a = addzero(a, m_sz), b = addzero(b, m_sz);
    rev(a);
    bool k=0;
    lolo up, down, s, n=0, rem;
    string c="";
    for(lolo i=0; i<m_sz; i++)
    {
        up = a[i]-48, down = b[i]-48;
        s = up + down + n;
        rem = s%10;
        n = s/10;
        c+= char(rem+48);
    }
    if(n)
        c+='1';
    return c;
}

void folafol(string a)
{
    bool flag = 0;
    lolo sz = a.size(), z=0;
    for(lolo i=0; i<sz; i++)
    {
        if(a[i]=='0' && !flag)
        {
            z++;
            continue;
        }
        if(a[i]!='0')
            flag = 1;
        cout<<a[i];
    }
    if(z==sz)
        cout<<0;
    cout<<endl;
}

int main()
{
    //read();
    string sum="0", str;
    while(cin>>str)
    {
        if(str=="0")
            break;
        str = check_valid(str);
        sum = add(str,sum);
    }
    rev(sum);
    folafol(sum);
    return 0;
}
