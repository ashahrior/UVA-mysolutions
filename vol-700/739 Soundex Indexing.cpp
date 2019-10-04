#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
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
map <string,string> mp;
void mapping()
{
    mp["B"] = mp["P"] = mp["F"] = mp["V"] = "1" ;
    mp["C"] = mp["S"] = mp["K"] = mp["G"] = mp["J"] = mp["Q"] = mp["X"] = mp["Z"] = "2" ;
    mp["D"] = mp["T"] = "3" ;
    mp["L"] = "4" ;
    mp["M"] = mp["N"] = "5" ;
    mp["R"] = "6" ;
    mp["A"] = mp["E"] = mp["I"] = mp["O"] = mp["U"] = mp["Y"] = mp["W"] = mp["H"] = "" ;
}

int main()
{
    read();
    mapping();
    string str;
    pf("         NAME                     SOUNDEX CODE\n");
    while(cin>>str)
    {
        pf("         ");
        cout<<str;
        int sz = str.size(), i;
        int l = 25 - sz;
        for(i=0; i<l; i++)
            cout<< " ";
        string sound ="";
        sound += str[0];
        for(i=1; i<sz; i++)
        {
            if(str[i-1]==str[i])
                continue;
            string c = "", d = "";
            c+=str[i-1], d+=str[i];
            if(mp[c]==mp[d])
                continue;
            sound+=mp[d];
        }
        sz = sound.size();
        if(sz==1)
        {
            cout<<sound<< "000"<<endl;
            continue;
        }
        if(sz==2)
        {
            cout<<sound<< "00"<<endl;
            continue;
        }
        if(sz==3)
        {
            cout<<sound<<"0"<<endl;
            continue;
        }
        cout<<sound[0]<<sound[1]<<sound[2]<<sound[3]<<endl;
    }
    int space = 32;
    cout<<setw(space);
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
