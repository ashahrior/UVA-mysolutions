#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
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
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

map <char, int> mp;
void mapping()
{
    mp.clear();
    int k = 10;
    for(char i = 'A' ; i<='F' ; i++)
    {
        mp[i] = k;
        k++;
    }
}

lolo base_decimal(string in, int base)
{
    int sz = in.size();
    int k=0;
    lolo sum=0;
    for(int i = sz-1; i>=0; i--)
    {
        int c;
        if(in[i]>='0' && in[i]<='9')
            c = in[i] - 48;
        else
        {
            char x = in[i];
            c = mp[x];
        }
        sum += ((long long)(pow(base,k))) * c;
        k++;
    }
    return sum;
}

string decimal_base(lolo num, int base)
{
    lolo x, n = num;
    string str="";
    x = n % base;
    if(x>=10 && x<=15)
        str+=char(55+x);
    else str+= x+48;
    n = n/base;
    while(n!=0)
    {
        x = n % base;
        if(x>=10 && x<=15)
            str+=char(55+x);
        else str+= x+48;
        n = n/base;
    }
    rev(str);
    return str;
}

int main()
{
    //read();
    mapping();
    string in, out;
    int in_b, out_b;
    while(cin>>in>>in_b>>out_b)
    {
        //cout<<in<< " "<< in_b<< " "<< out_b<<endl;
        lolo d_num = base_decimal(in, in_b);
        if(out_b==10)
        {
            stringstream ss;
            ss<<d_num;
            string st;
            ss>>st;
            int sz = st.size();
            if(sz>7)
                cout<< "  ERROR" <<endl;
            else
            {
                sz = 7- sz;
                for(int i=0; i<sz; i++)
                    cout<< " ";
                cout<<d_num<<endl;
            }
        }
        else
        {
            string num = decimal_base(d_num, out_b);
            int sz = num.size();
            if(sz>7)
                cout<< "  ERROR" <<endl;
            else
            {
                sz = 7 - sz;
                for(int i=0; i<sz; i++)
                    cout<< " ";
                cout<<num<<endl;
            }
        }
    }
    return 0;
}

/**

Sample Input
1111000  2 10
1111000  2 16
2102101  3 10
2102101  3 15
  12312  4  2
     1A 15  2
   ABCD 16 15
     03 13 10

Sample Output
   120
    78
  1765
   7CA
 ERROR
 11001
  D071
     3
*/
