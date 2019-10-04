#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    unsigned long int i, j, t, x, c=0, m, tag, low, up;
    while(cin>>str)
    {
        getchar();
        if(str.size()==0)
            break;
        cin>>t;
        c++;
        for(x=1; x<=t; x++)
        {
            cin>>i>>j;
            if(x==1)
                cout<<"Case "<<c<<":"<<endl;
            low = min(i,j), up = max(i,j), tag=0;
            for(m=low; m<up; m++)
            {
                if(str[m]!=str[m+1])
                {
                    tag=1;
                    cout<<"No"<<endl;
                    break;
                }
            }
            if(tag==0)
                cout<<"Yes"<<endl;
        }
    }
    return 0;
}
