#include<bits/stdc++.h> //AC
using namespace std;
int main()
{
    freopen("in.txt", "r", stdin);
    string s1, s2;
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        s1.clear(), s2.clear();
        getline(cin,s1);
        getline(cin,s2);
        int sz1, sz2, i, p1, p2, p3, p4;
        sz1 = s1.size(), sz2 = s2.size();
        bool flag1 = 0, flag2=0, flag3=0;
        for(i=0; i<sz1; i++)
        {
            if(s1[i]=='<' && !flag1)
            {
                p1 = i;
            }
            if(s1[i]=='>' && !flag1)
            {
                p2 = i;
                flag1 = 1;
                flag2 = 1;
            }
            if(s1[i]=='<' && flag2==1)
            {
                p3 = i;
                flag3 = 1;
            }
            if(s1[i]=='>' && flag3==1)
            {
                p4 = i;
                break;
            }
        }
        for(i=0; i<sz1; i++)
        {
            if(s1[i]!='<' && s1[i]!='>')
                cout<<s1[i];
        }
        cout<<endl;
        for(i=0; i<sz2-3; i++)
            cout<<s2[i];
        for(i=p3+1; i<p4; i++)
            cout<<s1[i];
        for(i=p2+1; i<p3; i++)
            cout<<s1[i];
        for(i=p1+1; i<p2; i++)
            cout<<s1[i];
        for(i=p4+1; i<sz1; i++)
            cout<<s1[i];
        cout<<endl;
    }
    return 0;
}
