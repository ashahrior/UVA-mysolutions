#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
int main()
{
    //freopen( "in.txt", "r", stdin);
    //freopen( "out.txt", "w", stdout);
    string year;
    int nl=0;
    while(cin>>year)
    {
        lolo i, sz, y4, y100, y400, y15, y55;
        y4=y100=y400=y15=y55=0;
        sz = year.size();
        for(i=0; i<sz; i++)
        {
            y4 = (y4*10 + (year[i]-48)) %4;
            y100 = (y100*10 + (year[i]-48)) %100;
            y400 = (y400*10 + (year[i]-48)) %400;
            y15 = (y15*10 + (year[i]-48)) %15;
            y55 = (y55*10 + (year[i]-48)) %55;
        }
        if(nl!=0)
            cout<<endl;
        nl++;
        bool leap = 0, flag=0;
        if( (!y4 && y100!=0) || !y400)
        {
            cout << "This is leap year.\n";
            leap = 1, flag=1;
        }
        if(!y15)
        {
            cout<< "This is huluculu festival year.\n";
            flag = 1;
        }
        if(leap && !y55)
        {
            cout<< "This is bulukulu festival year.\n";
            flag = 1;
        }
        if(!flag)
            cout<< "This is an ordinary year.\n";
    }
    return 0;
}
