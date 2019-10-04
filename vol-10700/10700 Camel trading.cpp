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

lolo mini(string str);
lolo maxi(string str);
int conv1(char a, char b);
int conv2(char a);

int main()
{
    //read();
    int t;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>str;
        lolo small = mini(str);
        lolo big = maxi(str);
        pf("The maximum and minimum are %lld and %lld.\n", big, small);
    }
    return 0;
}

int conv1(char a, char b)
{
    int num = (a-48)*10 + (b-48);
    return num;
}
int conv2(char a)
{
    int num = (a-48);
    return num;
}

lolo mini(string str) /// sum of products
{
    int sz = str.size();
    char last_sign;
    lolo sum = 0, mul = 1, num;
    bool gun=0, s=0;
    for(int i=0; i<sz; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            if(str[i+1]>='0' && str[i+1]<='9')
            {
                num = conv1(str[i],str[i+1]);
                i++;
            }
            else
                num = conv2(str[i]);
            s=0;
        }
        else if(str[i]=='+')
        {
            if(!gun)
                sum+=num;
            if(gun)
                sum+=(mul*num);
            gun=0;
            mul=1;
            s=1;
        }
        else if(str[i]=='*')
        {
            gun = 1;
            mul*=num;
            s=1;
        }
        if(str[i]=='*' || str[i]=='+')
            last_sign = str[i];
    }
    if(last_sign=='+')
        sum+=num;
    else
    {
        mul*=num;
        sum+=mul;
    }
    return sum;
}

lolo maxi(string str) /// product of sums
{
    int sz = str.size();
    char last_sign;
    lolo sum = 0, mul = 1, num;
    bool jog=0, s=0;
    for(int i=0; i<sz; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            if(str[i+1]>='0' && str[i+1]<='9')
            {
                num = conv1(str[i],str[i+1]);
                i++;
            }
            else
                num = conv2(str[i]);
            s=0;
        }
        else if(str[i]=='*')
        {
            if(!jog)
                mul*=num;
            if(jog)
                mul*=(sum+num);
            jog=0;
            sum=0;
            s=1;
        }
        else if(str[i]=='+')
        {
            jog=1;
            sum+=num;
            s=1;
        }
        if(str[i]=='*' || str[i]=='+')
            last_sign = str[i];
    }
    if(last_sign=='+')
    {
        sum+=num;
        mul*=sum;
    }
    else
    {
        mul*=num;
    }
    return mul;
}

/**
Sample Input
3
1+2*3*4+5
4*18+14+7*10
3+11+4*1*13*12*8+3*3+8
Sample Output
The maximum and minimum are 81 and 30.
The maximum and minimum are 1560 and 156.
The maximum and minimum are 339768 and 5023.
*/
