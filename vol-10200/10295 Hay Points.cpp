#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    //freopen("in.txt", "r", stdin);
    map <string, lolo> pay;
    string word;
    lolo tk, m, n, i;
    cin>>m>>n;
    for(i=0; i<m; i++)
    {
        cin>>word;
        cin>>tk;
        //cout<<word<< " "<<tk<<endl;
        pay[word] = tk;
    }
    /*map <string, lolo>::iterator it;
    for(it = pay.begin(); it!=pay.end(); it++)
        cout<<(*it).first.data()<< " "<< (*it).second<<endl;*/
    for(i=0; i<n; i++)
    {
        lolo sum=0;
        while(cin>>word)
        {
            if(word== ".")
                break;
            sum+= pay[word];
        }
        cout<<sum<<endl;
    }
    return 0;
}
