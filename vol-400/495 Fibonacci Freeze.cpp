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

string add(string a, string b);

int main()
{
    int num, i;
    string str;
    map <int, string> mp;
    mp.clear();
    mp[0] = "0", mp[1] = "1";
    for(i=2; i<=5000; i++)
        mp[i] = add(mp[i-1],mp[i-2]);

    /*for(i=0; i<=20; i++)
    {
        pf("mp[%d] = ", i);
        cout<<mp[i]<<endl;
    }*/
    while(cin>>num)
    {
        cout<< "The Fibonacci number for "<<num<< " is "<< mp[num]<<endl;
    }
return 0;
}

string add(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int i, j, x, y, sum, s, temp=0;
    string c="";
    if(a.size()<b.size())
        swap(a,b);
    for(i=0; i<a.size(); i++)
    {
        if(i<b.size())
        {
            x = a[i] - '0', y = b[i] - '0';
            sum = x+y+temp;
            s = sum % 10;
            c+=s+'0';
            temp=0;
            if(sum>9)
                temp = 1;
            if(i==a.size()-1 && temp==1)
                c+='1';
        }
        else
        {
            x = a[i] - '0';
            sum = temp+x;
            s = sum%10;
            c+=s+'0';
            temp = 0;
            if(sum>9)
                temp = 1;
            if(i==a.size()-1 && temp==1)
                c+='1';
        }
    }
    reverse(c.begin(),c.end());
    return c;
}

/**
Sample Input
5
7
11
Sample Output
The Fibonacci number for 5 is 5
The Fibonacci number for 7 is 13
The Fibonacci number for 11 is 89
*/
