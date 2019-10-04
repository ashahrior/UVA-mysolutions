#include<bits/stdc++.h> /// The problem description has some issues
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
int main()
{
    //read();
    int t, c, i;
    cin>>t;
    getchar();
    while(t--)
    {
        string str1, str2;
        cin>>str1;
        cin>>c;
        getchar();
        while(c--)
        {
            cin>>str2;
            bool flag=1;
            int i, sz = str2.size();
            for(i=0; i<sz; i++)
            {
                if(str1[i]!=str2[i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
                cout<< "y"<<endl;
            else cout<< "n"<<endl;
        }
    }
    return 0;
}

