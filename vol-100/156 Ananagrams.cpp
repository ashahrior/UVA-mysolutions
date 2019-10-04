#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a)) // b= 0 or b=-1
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

int main()
{
    //read();
    string word, word2, copyy;
    map <string, int> mp1;
    map <string, string> mp2;
    vector <string> v1, v2;
    mp1.clear(), mp2.clear();
    v1.clear(), v2.clear();
    while(cin>>word)
    {
        if(word=="#")
            break;
        copyy = word;
        transform_down(copyy);
        v_sort(copyy);
        mp1[copyy]++;
        mp2[copyy] = word;
    }
    map <string, int> :: iterator it;
    for(it = mp1.begin(); it!=mp1.end(); it++)
    {
        if( (*it).second==1 )
        {
            //cout<< (*it).first << " "<< (*it).second<<endl;
            word = (*it).first;
            v1.pb(word);
        }
    }
    int i, sz = v1.size();
    for(i=0; i<sz; i++)
    {
        word = v1[i];
        word2 = mp2[word];
        v2.pb(word2);
    }
    v_sort(v2);
    sz = v2.size();
    for(i=0; i<sz; i++)
        cout<<v2[i]<<endl;
    return 0;
}

/**
Sample input
ladder came tape soon leader acme RIDE lone Dreis peat
ScAlE orb eye Rides dealer NotE derail LaCeS drIed
noel dire Disk mace Rob dries
#
Sample output
Disk
NotE
derail
drIed
eye
ladder
soon
*/
