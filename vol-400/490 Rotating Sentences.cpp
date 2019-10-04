#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str[105];
    int i=0, j, mlen=0, count=0;
    while(getline(cin,str[i]))
    {
        if(mlen<str[i].size())
        {
            mlen = str[i].size();
        }
        i++;
        count++;
    }
    for(i=0; i<mlen; i++)
    {
        for(j=count-1; j>=0; j--)
        {
            if(str[j].size()>i)
                cout<<str[j][i];
            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
