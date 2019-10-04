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
#define gl getline

int main()
{
    lolo i, sz, dividor;
    bool space, found, divide, mod;
    string divisor;
    vector <lolo> vagfol;
    char c;
    string str;
    while(gl(cin,str))
    {
        dividor=space=found=divide=mod=0;
        divisor="";
        sz = str.size();

        stringstream sss(str);
        string ara[3], box;
        int z=0;
        while(sss>>box)
            ara[z++] = box;
        divisor = ara[0];
        if(ara[1]=="%")
            mod = 1;
        else divide = 1;
        stringstream s2(ara[2]);
        s2>>dividor;
        /**for(i=0; i<sz; i++)
        {
            if(str[i]>=48 && str[i]<=57 && space==0)
            {
                c = str[i];
                divisor+=c;
                found = 1;
            }
            if(str[i]==32 && found==1)
                space=1;

            if(str[i]==47)
                divide = 1;

            if(str[i]==37)
                mod = 1;

            if( (divide==1 || mod==1) && space==1 && str[i]>=48 && str[i]<=57)
                dividor= dividor*10 + str[i]-48;
        }*/

        lolo divsz = divisor.size();
        if(divsz<19)
        {
            lolo num;
            stringstream ss(divisor);
            ss>>num;
            if(divide)
            {
                lolo res;
                res = num/dividor;
                cout<<res<<endl;
            }
            else
            {
                lolo res = num%dividor;
                cout<<res<<endl;
            }
        }
        else
        {
            vagfol.clear();
            lolo rem=0, x=0;
            for(i=0; i<divsz; i++)
            {
                rem = rem*10+(divisor[i]-48);
                vagfol.pb((rem/dividor));
                rem = rem%dividor;
            }
            if(divide)
            {
                lolo vg = vagfol.size();
                bool flag=0;
                for(i=0; i<vg; i++)
                {
                    if(vagfol[i]==0 && !flag)
                        continue;
                    else if(vagfol[i]!=0 && !flag)
                        flag=1;
                    cout<<vagfol[i];
                }
                cout<<endl;
            }
            else
            {
                cout<<rem<<endl;
            }
        }
    }
    return 0;
}
