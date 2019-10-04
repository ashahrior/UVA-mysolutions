#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
int main()
{
    //read();
    //write();
    string str, word, num;
    vector <string> v;
    v.clear();
    set <string> st;
    st.clear();
    set <string>:: iterator it;
    int i, sz, nsz, j;
    while(getline(cin,str))
    {
        stringstream ss(str);
        while(ss>>word)
            v.push_back(word);
    }
    sz = v.size();
    for(i=0; i<sz; i++)
    {
        word = "";
        num = v[i];
        nsz = num.size();
        j=0;
        while(j<num.size())
        {
            word="";
            while(isalpha(num[j]))
            {
                word+=tolower(num[j]);
                j++;
            }
            if(word.size())
                st.insert(word);
            j++;
        }
    }
    for(it=st.begin(); it!=st.end(); it++)
        cout<<(*it)<<endl;
    return 0;
}
