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

bool check(string str, long sz);
void deci_hex(string str, long sz);
void hex_deci(string str, long sz);

int main()
{
    //read();
    string str;
    long sz;
    while(cin>>str)
    {
        if(str[0]=='-')
        {
            break;
        }
        sz = str.size();
        bool systemm = check(str, sz);
        if(systemm)
        {
            deci_hex(str,sz);
        }
        else
        {
            hex_deci(str,sz);
        }
    }
    return 0;
}

bool check(string str, long sz)
{
    long i;
    for(i=0; i<sz; i++)
    {
        if(str[i]=='x')
        {
            return false;
        }
    }
    return true;
}

void deci_hex(string str, long sz)
{
    stringstream ss(str);
    long rem, num;
    ss>>num;
    string output="";
    while(num!=0)
    {
        rem = num%16;
        if(rem>9)
        {
            output+= 55 + rem;
        }
        else
        {
            output+= rem + 48;
        }
        num = num/16;
    }
    reverse(output.begin(),output.end());
    pf("0x");
    cout<<output<<endl;
    return;
}

void hex_deci(string str, long sz)
{
    string str2="", output="";
    bool flag=0;
    long i;
    for(i=0; i<sz; i++)
    {
        if(str[i]=='x' && !flag)
        {
            flag=1;
            continue;
        }
        else if(!flag)
        {
            continue;
        }
        str2+=str[i];
    }
    sz = str2.size();
    long p=0, sum=0;
    for(i=sz-1; i>=0; i--)
    {
        if(str2[i]>='A' && str2[i]<='F')
        {
            sum+= pow(16,p) * (str2[i] - 55);
        }

        else
        {
            sum+= pow(16,p) * (str2[i] - 48);
        }

        p++;
    }
    cout<<sum<<endl;
    return;
}

/**
Sample Input
4
7
44
0x80685
-1
Sample Output
0x4
0x7
0x2C
525957
*/
