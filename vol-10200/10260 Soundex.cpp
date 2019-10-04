#include<bits/stdc++.h>
using namespace std;
int main()
{
    /**freopen( "soundexin.txt", "r", stdin);
    freopen( "soundexout.txt", "w", stdout);**/
    string str;
    int i, l;
    while(cin>>str)
    {
        l = str.size();
        for(i=0; i<l; i++)
        {
            if(str[i]=='B' || str[i]=='F' || str[i]=='P' || str[i]=='V')
            {
                if(str[i-1]!='B' && str[i-1]!='F' && str[i-1]!='P' && str[i-1]!='V')
                    cout<<"1";
            }
            else if(str[i]=='C' || str[i]=='G' || str[i]=='J' || str[i]=='K' || str[i]=='Q' || str[i]=='S' || str[i]=='X' || str[i]=='Z')
            {
                if(str[i-1]!='C' && str[i-1]!='G' && str[i-1]!='J' && str[i-1]!='K' && str[i-1]!='Q' && str[i-1]!='S' && str[i-1]!='X' && str[i-1]!='Z')
                    cout<<"2";
            }
            else if(str[i]=='D' || str[i]=='T')
            {
                if(str[i-1]!='D' && str[i-1]!='T')
                    cout<<"3";
            }
            else if(str[i]=='L')
            {
                if(str[i-1]!='L')
                    cout<<"4";
            }
            else if(str[i]=='M' || str[i]=='N')
            {
                if(str[i-1]!='M' && str[i-1]!='N')
                    cout<< "5";
            }
            else if(str[i]=='R')
            {
                if(str[i-1]!='R')
                    cout<< "6";
            }
        }
        cout<<endl;
    }
    return 0;
}
