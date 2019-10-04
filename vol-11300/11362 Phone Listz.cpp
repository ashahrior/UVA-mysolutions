#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    int i, n, j, x, s1, s2, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        getchar();
        string str[n+1];
        for(i=0; i<n; i++)
            cin>>str[i];
        sort(str,str+n);
        bool flag=0;
        for(i=0; i<n; i++)
        {
            for(x=i+1; x<n; x++)
            {
                flag=0;
                s1 = str[i].size(), s2 = str[x].size();
                if(s1>s2)
                {
                    flag=1;
                    break;
                }
                else
                {
                    for(j=0; j<s1 && j<s2 ; j++)
                    {
                        if(str[i][j]!=str[x][j])
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(!flag)
                {
                    cout<< "NO"<<endl;
                    break;
                }
            }
            if(!flag)
                break;
        }
        if(flag)
            cout<< "YES"<<endl;
    }
    return 0;
}


