#include<bits/stdc++.h>
using namespace std;
#define gl getline
int main()
{
    int t, i, sz;
    bool flag;
    char c;
    string str;
    stack <char> p;
    cin>>t;
    getchar();
    while(t--)
    {
        while(!p.empty())
        {
            p.pop();
        }
        gl(cin,str);
        sz = str.size();
        flag=0;
        for(i=0; i<sz; i++)
        {
            c=str[i];
            if(c=='(' || c=='[')
            {
                p.push(c);
            }
            else if(c==')' || c==']')
            {
                if(i==0)
                {
                    flag=1;
                    break;
                }
                if((p.top()=='(' && c==')') || (p.top()=='[' && c==']') )
                {
                    p.pop();
                }
                else
                {
                    flag=1;
                    break;
                }
            }
            if(p.empty() && ((sz-i)>1) && (str[i+1]==')' || str[i+1]==']'))
            {
                flag=1;
                break;
            }
        }
        if(flag || !p.empty())
            cout<< "No"<<endl;
        else if(!flag && p.empty())
            cout<< "Yes"<<endl;
    }
    return 0;
}
