#include<bits/stdc++.h>
using namespace std;

/**
W = 1
H = 1/2
Q = 1/4
E = 1/8
S = 1/16
T = 1/32
X = 1/64
*/

int main()
{
    string str;
    map<char,float> mp;
    mp['W'] = 1, mp['H'] = 0.5, mp['Q'] = 0.25, mp['E'] = 0.125, mp['S'] = 0.0625, mp['T'] = 0.03125, mp['X'] = 0.015625;

    while(cin>>str)
    {
        if(str=="*")
            break;

        int sz = str.size();

        int countt = 0;
        float sum = 0;
        //string s = "";
        for(int i = 1; i<sz; i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                sum += mp[str[i]];
                //s += str[i];
            }

            else if(str[i]=='/')
            {
                //cout<< s<< " : "<< sum<<endl;
                if(sum==1.00)
                    countt++;
                sum = 0;
                //s = "";
            }
        }

        cout<<countt<<endl;

    }

    return 0;
}

/**
Sample Input
/HH/QQQQ/XXXTXTEQH/W/HW/
/W/W/SQHES/
/WE/TEX/THES/
*
Sample Output
4
3
0
*/
