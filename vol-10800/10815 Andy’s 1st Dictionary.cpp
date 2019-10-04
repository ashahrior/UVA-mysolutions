#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
int main()
{
    //read();
    //write();
    string str, word;
    set <string> st;
    st.clear();
    set <string>:: iterator it;
    int i;
    while(cin>>str)
    {
        i=0, word="";
        while(i<str.size())
        {
            word= "";
            while(isalpha(str[i]))
            {
                word+= tolower(str[i]);
                i++;
            }
            if(word.size())
                st.insert(word);
            i++;
        }
    }
    for(it=st.begin(); it!=st.end(); it++)
        cout<<(*it)<<endl;
    return 0;
}
