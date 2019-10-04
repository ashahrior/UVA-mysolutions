#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tkn, n;
    while(cin>>tkn)
    {
        if(!tkn)
            break;
        cin>>n;
        map <string,bool> mp;
        for(int i = 0; i<tkn; i++)
        {
            string str;
            cin>>str;
            mp[str] = 1;
        }
//        for(auto elem:mp)
//            cout<< elem.first<< " "<<elem.second<<endl;
        bool flag = 0;
        for(int i = 0; i<n; i++)
        {
            int num, mini;
            cin>>num>>mini;
            int cnt = 0;
            for(int x = 0; x<num; x++)
            {
                string str;
                cin>>str;
                if(mp[str]==1)
                    cnt++;
            }
            if(cnt<mini)
                flag = 1;
        }
        if(flag)
            cout<< "no"<<endl;
        else cout<< "yes" <<endl;
    }
    return 0;
}

/**
Sample Input
3 2
0123 9876 2222
2 1 8888 2222
3 2 9876 2222 7654
3 2
0123 9876 2222
2 2 8888 2222
3 2 7654 9876 2222
3 2
0123 9876 2222
2 2 0123 2222
3 2 7654 9876 2222
0
Sample Output
yes
no
yes
*/
