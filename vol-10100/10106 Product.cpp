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
string mul(string a, string b);
string add(string a, string b);
string addzero_back(string a, int num);
void showpro(string pro);
int max_sz=0;
int main()
{
    string a, b, pro;
    while(cin>>a>>b)
    {
        pro = mul(a,b);
        reverse(pro.begin(),pro.end());
        showpro(pro);
    }
    return 0;
}
void showpro(string pro)
{
    bool flag = 0;
    int sz = pro.size(), z=0;
    for(int i=0; i<sz; i++)
    {
        if(pro[i]=='0' && !flag)
        {
            z++;
            continue;
        }
        if(pro[i]!='0')
            flag = 1;
        cout<<pro[i];
    }
    if(z==sz)
        cout<<0;
    cout<<endl;
}
string mul(string a, string b)
{
    string c[1000];
    int asz, bsz, k, i, j, rem, gunfol;
    asz = a.size(), bsz = b.size();
    k=0;
    for(i=0; i<1000;i++)
        c[i]="";
    for(i=bsz-1; i>=0; i--)
    {
        rem = 0;
        for(j=asz-1; j>=0; j--)
        {
            gunfol = ( a[j] - 48 ) * ( b[i] - 48);
            gunfol+=rem;
            rem = gunfol/10;
            gunfol = gunfol%10;
            c[k]+=char(gunfol+48);
            if(j==0 && rem)
            {
                c[k]+=char(rem+48);
            }
        }
        reverse(c[k].begin(), c[k].end());
        k++;
    }
    int max_sz=0;
    for(i=1; i<k; i++)
        c[i] = addzero_back(c[i], i);
    string sum = "0";
    for(i=0; i<k; i++)
    {
        reverse(c[i].begin(), c[i].end());
        sum = add(c[i],sum);
    }
    //reverse(sum.begin(), sum.end());
    return sum;
}
string addzero_back(string a, int num)
{
    string z="";
    for(int i=0; i<num; i++)
        z+='0';
    return a+z;
}
string add(string a, string b)
{
    int x, y, carry=0, sum, i, j, s;
    string c = "";
    if(a.size()<b.size())
        swap(a,b);
    for(i=0; i<a.size(); i++)
    {
        if(i<b.size())
        {
            x = a[i]-'0', y= b[i] - '0';
            sum = x+y+carry;
            s = sum%10;
            c+=s+'0';
            carry=0;
            if(sum>9) carry = 1;
            if(i==a.size()-1 && carry==1)
                c+='1';
        }
        else
        {
            x = a[i] - '0';
            sum = carry+x;
            s = sum%10;
            c+=s+'0';
            carry = 0;
            if(sum>9) carry = 1;
            if(i==a.size()-1 && carry == 1)
                c+='1';
        }
    }
    return c;
}

/**
Sample Input
12
12
2
222222222222222222222222
Sample Output
144
444444444444444444444444
*/
