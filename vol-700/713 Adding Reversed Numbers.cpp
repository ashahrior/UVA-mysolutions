#include<bits/stdc++.h>
using namespace std;
string add(string a, string b);
int main()
{
    string sum="0", str1, str2;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>str1>>str2;
        getchar();
        sum = add(str1,str2);
        int sz = sum.size();
        bool flag=0;
        for(int i=0; i<sz; i++)
        {
            if(sum[i]=='0' && !flag)
                continue;
            flag=1;
            cout<<sum[i];
        }
        cout<<endl;
    }
    return 0;
}
string add(string a, string b)
{
    int i, j, x, y, sum, s, temp=0;
    string c="";
    if(a.size()<b.size()) swap(a,b);
    for(i=0; i<a.size(); i++)
    {
        if(i<b.size())
        {
            x = a[i] - '0', y = b[i] - '0';
            sum = x+y+temp;
            s = sum%10;
            c+=s+'0';
            temp = 0;
            if(sum>9) temp=1;
            if(i==a.size()-1 && temp==1)
                c+='1';
        }
        else
        {
            x = a[i] - '0';
            sum = temp+x;
            s = sum%10;
            c+=s+'0';
            temp=0;
            if(sum>9) temp = 1;
            if(i==a.size()-1 && temp==1)
                c+='1';
        }
    }
    return c;
}
