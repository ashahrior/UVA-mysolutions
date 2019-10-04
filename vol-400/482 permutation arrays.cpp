#include<bits/stdc++.h>
using namespace std;
vector<int>first;
vector<string>second;
vector< pair<int, string> >result;

int main()
{
    int test, ind;
    scanf("%d",&test);
    string s, t, str;
    getchar();
    while(test--)
    {
        getchar();
        getline(cin,s);
        stringstream ss(s);
        while(ss>>ind) first.push_back(ind);
        getline(cin,str);
        stringstream sst(str);
        while(sst>>t) second.push_back(t);
        int sztot = min(first.size(), second.size());
        for(int i=0; i<sztot; i++)
        {
            result.push_back(make_pair(first[i],second[i]));
        }
        sort(result.begin(), result.end());
        for(int i=0; i<sztot; i++)
            cout<<result[i].second<<endl;
        first.clear();
        second.clear();
        result.clear();
        if(test)
            printf("\n");
    }
    return 0;
}

/** this has got runtime errors ... a lot :'(
#include<bits/stdc++.h>
using namespace std;
//#define pb push_back
int main()
{
    //freopen( "in.txt", "r", stdin);
    //freopen( "out.txt", "w", stdout);
    int t, i, sz, num;
    float nm;
    string line;
    vector <int> v;
    cin>>t;
    bool state = true;
    getchar();
    while(t--)
    {
        if(!state)
            cout<<endl;
        state = false;
        getline(cin,line);
        //getchar();
        stringstream ss(line);
        while(ss>>num)
            v.push_back(num);
        sz = v.size();
        string val[sz+1];
        for(i=0; i<sz; i++)
        {
            cin>>val[v[i]];
        }
        sort(v.begin(), v.end());
        for(i=0; i<sz; i++)
        {
            cout<<val[v[i]]<<endl;
        }
        v.clear();
        //getchar();
    }
    return 0;
}**/
