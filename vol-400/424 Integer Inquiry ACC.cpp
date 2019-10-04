#include<bits/stdc++.h>
using namespace std;
string add(string a, string b);
int main()
{
    string sum="0", str;
    while(cin>>str)
    {
        if(str=="0")
            break;
        reverse(str.begin(),str.end());
        sum = add(str,sum);
    }
    reverse(sum.begin(), sum.end());
    cout<<sum<<endl;
    return 0;
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

