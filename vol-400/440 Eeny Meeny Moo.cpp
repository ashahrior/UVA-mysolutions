#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c, r, x, count;
    bool ct[160], flag;
    while(cin>>n &&n)
    {
        flag=0;
        for(m=1; ; m++)
        {
            memset(ct,0,sizeof(ct));
            c=1, count=1, x=0;
            ct[1]=1;
            while(1)
            {
                if(ct[c]==0)
                    x++;
                if(x==m)
                {
                    ct[c]=1;
                    x=0;
                    count++;
                }
                if(count==n)
                {
                    r = c;
                    break;
                }
                c++;
                if(c>n)
                {
                    c=1;
                }
            }
            if(r==2)
                break;
        }
        cout<<m<<endl;
    }
    return 0;
}
