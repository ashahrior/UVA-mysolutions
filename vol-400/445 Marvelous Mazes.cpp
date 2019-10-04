#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[135], c;
    int len, i, j, d, freq;
    while(gets(str))
    {
        freq = 0;
        len = strlen(str);
        for(i=0; i<len; i++)
        {
            if(str[i]>=48 && str[i]<=57)
            {
                freq+= str[i]-'0';
            }
            else if(str[i]>64 && str[i]<91)
            {
                for(j=0; j<freq; j++)
                    cout<<str[i];
                freq = 0;
            }
            else if(str[i]=='*')
            {
                for(j=0; j<freq; j++)
                    cout<<"*";
                freq = 0;
            }
            else if(str[i]=='b')
            {
                for(j=0; j<freq; j++)
                    cout<<" ";
                freq = 0;
            }
            else if(str[i]=='!')
            {
                cout<<endl;
                freq = 0;
            }
        }
        cout<<endl;
    }
    return 0;
}
