#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))

int main()
{
    //read();
    string str, n, num;
    int i, sz, val;
    while(getline(cin,str))
    {
        sz = str.size();
        bool flag=0;
        if(str[0]>='0' && str[0]<='9')
            flag=1;
        num = "";
        if(!flag)
        {
            for(i=0; i<sz; i++)
            {
                val = str[i];
                stringstream ss;
                ss << val;
                ss >> n;
                num+=n;
            }
            reverse(num.begin(),num.end());
            cout<<num<<endl;
        }
        else
        {
            reverse(str.begin(),str.end());
            n="";
            for(i=0; i<sz; i++)
            {
                n+= str[i];
                stringstream ss;
                ss << n;
                ss >> val;
                if( (val>='A' && val<='Z') || (val>='a' && val<='z') || val==32 || val==33
                   || val==44 || val==46 || val==58 || val==59 || val==63 )
                {
                    cout<<char(val);
                    n="";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
