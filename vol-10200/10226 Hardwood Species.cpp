#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    //freopen("in.txt", "r", stdin);
    map <string, lolo> tree;
    string name;
    lolo t, count;
    cin>>t;
    getchar();
    getchar();
    while(t--)
    {
        count=0;
        tree.clear();
        while(getline(cin,name))
        {
            if(!name.size())
                break;
            if( !tree.count(name) )
                tree[name]=1;
            else
                tree[name]++;
            count++;
        }
        map <string,lolo>::iterator it;
        for(it=tree.begin(); it!=tree.end(); it++)
        {
            printf("%s %.04lf\n", (*it).first.data(), (double)(*it).second/(double)count*100 );
        }
        if(t>0)
            cout<<endl;
    }
    return 0;
}
