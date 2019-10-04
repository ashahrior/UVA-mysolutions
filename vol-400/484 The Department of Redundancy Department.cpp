#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> num;
    map <int, int> found;
    map <int, int> nu;
    num.clear();
    found.clear();
    nu.clear();
    int n, i, len;
    while(cin>>n)
    {
        if(nu[n]!=1)
        {
            nu[n]=1;
            num.push_back(n);
            found[n]++;
        }
        else found[n]++;
    }
    len = num.size();
    for(i=0; i<len; i++)
    {
        cout<<num[i]<<char(32)<<found[num[i]]<<endl;
    }
    return 0;
}
