#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c, i, sz, t, x, chk, wsz;
    vector <string> v;
    string words[100], str;
    cin>>t;
    getchar();
    getchar();
    for(c=1; c<=t; c++)
    {
        x=0;
        while(1)
        {
            v.clear();
            getline(cin,str);
            if(str.size()==0)
                break;
            stringstream ss(str);
            string word;
            while(ss>>word)
                v.push_back(word);
            sz = v.size();
            chk=2;
            words[x]= "";
            for(i=0; i<sz; i++)
            {
                if(i==0)
                {
                    words[x]+=v[i][0];
                }
                else
                {
                    wsz = v[i].size();
                    if(wsz>=chk)
                    {
                        words[x]+=v[i][chk-1];
                        chk++;
                    }
                }
            }
            x++;
        }
        printf("Case #%d:\n", c);
        for(i=0; i<x; i++)
            cout<<words[i]<<endl;
        if(c<=t-1)
            cout<<endl;
    }
    return 0;
}

