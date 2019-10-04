#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, i, ara[11];
    bool onn=0;
    while(cin>>num &&num)
    {
        getchar();
        if(!onn)
            memset(ara,0,sizeof(ara));
        string str, high = "too high", low = "too low", on = "right on";
        getline(cin, str);
        if(str==high)
        {
            for(i=num; i<=10; i++)
                ara[i]=1;
            onn=1;
        }
        else if(str==low)
        {
            for(i=num; i>=1; i--)
                ara[i]=1;
            onn=1;
        }
        else if(str==on)
        {
            if(ara[num]==0)
                cout<< "Stan may be honest"<<endl;
            else
                cout<< "Stan is dishonest"<<endl;
            onn=0;
        }
    }
    return 0;
}
