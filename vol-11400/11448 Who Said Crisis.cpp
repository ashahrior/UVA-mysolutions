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

bool sign=0;
string check_valid(string str); /// function to check the input format, emitting leading zeros
string minuss(string a, string b); /// function that does the subtraction
string addzero(string str, lolo m_sz); /// adding zero to the front of lesser sized strings
bool check_boro(string a, string b); /// checking which number is larger, determining size
void folafol(string a); /// shows the result

int main()
{
    read();
    write();
    lolo t;
    string boro, choto;
    cin>>t;
    while(t--)
    {
        sign = 0;
        cin>>boro>>choto;
        boro = check_valid(boro);
        choto = check_valid(choto);
        string result = minuss(boro,choto);
        folafol(result);
    }
    return 0;
}

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

void folafol(string a)
{
    bool flag = 0;
    lolo sz = a.size(), z=0;
    if(sign)
        cout<< "-";
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

string minuss(string a, string b)
{
    if(a.size()<b.size())
    {
        sign=1;
        swap(a,b);
    }
    else if(a.size()==b.size())
    {
        bool yes=0;
        yes = check_boro(a,b);
        if(!yes)
        {
            swap(a,b);
            sign = 1;
        }
    }
    rev(a), rev(b);
    lolo m_sz = max(a.size(),b.size());
    a = addzero(a, m_sz), b = addzero(b, m_sz);
    bool k=0;
    lolo up, down, s;
    string c="";
    for(lolo i=0; i<m_sz; i++)
    {
        up = a[i]-48, down = b[i]-48;
        if(k)
            down++;
        if(up<down)
        {
            up+=10;
            k = 1;
        }
        else if(up>=down)
            k=0;
        s = up - down;
        c+= char(s+48);
    }
    rev(c);
    return c;
}

bool check_boro(string a, string b)
{
    lolo sz = a.size();
    for(lolo i=0; i<sz; i++)
    {
        lolo n1 = a[i] - 48, n2 = b[i] - 48;
        if(n1<n2)
            return 0;
        else if(n1>n2)
            return 1;
    }
    return 1;
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
        str+=zero;
    }
    return str;
}
