#include<bits/stdc++.h>
using namespace std;
#define lolo unsigned long long
int main()
{
    lolo t;
    while(cin>>t &&t)
    {
        lolo i, num, sum;
        //vector <lolo> v;
        lolo ara[t+1];
        for(i=0; i<t; i++)
        {
            /**cin>>num;
            v.push_back(num);*/
            cin>>ara[i];
            if(i==0)
            {
                sum = ara[0];
                continue;
            }
            sum = sum^ara[i];
        }
        //lolo sum = v[0];
        /**lolo sum = ara[0];
        for(i=1; i<t; i++)
        {
            sum = sum^ara[i];
        }*/
        if(!sum)
            cout<< "No"<<endl;
        else
            cout<< "Yes"<<endl;
    }
    return 0;
}

/** this was a complete wrong idea. as i didn't realize the game method. Check NIM GAME
int main()
{
    lolo t;
    while(cin>>t &&t)
    {
        lolo num;
        vector <lolo> v;
        for(lolo i=0; i<t; i++)
        {
            cin>>num;
            v.push_back(num);
        }
        if(t%2)
            cout<< "Yes"<<endl;
        else
            cout<< "No"<<endl;
    }
    return 0;
}*/
