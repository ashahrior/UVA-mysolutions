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
#define gc() getchar();
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

map <string,string> mp;
void mapping()
{
    mp[".-"] = "A",         mp["-..."] = "B",       mp[ "-.-." ] = "C" ,        mp["-.."] = "D" ,       mp[ "." ] = "E" ;
    mp["..-."] = "F",       mp["--."] = "G",        mp[ "...." ] = "H" ,        mp[".."] = "I" ,        mp[ ".---" ] = "J" ;
    mp["-.-"] = "K",        mp[".-.."] = "L",       mp[ "--" ] = "M" ,          mp["-."] = "N" ,        mp[ "---" ] = "O" ;
    mp[".--."] = "P",       mp["--.-"] = "Q",       mp[ ".-." ] = "R" ,         mp["..."] = "S" ,       mp[ "-" ] = "T" ;
    mp["..-"] = "U",        mp["...-"] = "V",       mp[ ".--" ] = "W" ,         mp["-..-"] = "X" ,      mp[ "-.--" ] = "Y" ;
    mp["--.."] = "Z",       mp["-----"] = "0",      mp[ ".----" ] = "1" ,       mp["..---"] = "2" ,     mp[ "...--" ] = "3" ;
    mp["....-"] = "4",      mp["....."] = "5",      mp[ "-...." ] = "6" ,       mp["--..."] = "7" ,     mp[ "---.." ] = "8" ;
    mp["----."] = "9",      mp[".-.-.-"] = ".",     mp[ "--..--" ] = "," ,      mp["..--.."] = "?" ,    mp[ ".----." ] = "'" ;
    mp["-.-.--"] = "!",     mp["-..-."] = "/",      mp[ "-.--." ] = "(" ,       mp["-.--.-"] = ")" ,    mp[ ".-..." ] = "&" ;
    mp["---..."] = ":",     mp["-.-.-."] = ";",     mp[ "-...-" ] = "=" ,       mp[".-.-."] = "+" ,     mp[ "-....-" ] = "-" ;
    mp["..--.-"] = "_",     mp[".-..-."] = "\"",    mp[ ".--.-." ] = "@" ,      mp[" "] ="" ,    mp["  "] =" ",     mp[""]="";
    // '(' - THIS SYMBOL HAS SOME KAHINI
}

int main()
{
    mapping();
    string in, out, st;
    int t;
    cin>>t;
    gc();
    for(int c=1; c<=t; c++)
    {
        gl(in);
        out = "";
        int i, sz = in.size();
        bool flag=0;
        for(i=0; i<sz; i++)
        {
            st = "";
            if(in[i] == ' ' && in[i+1] == ' ' && flag)
            {
                out+=" ";
                i++;
                continue;
            }
            else if(in[i] == ' ' && in[i+1]!= ' ')
                i++;
            while(in[i]!= ' ' && i<sz)
            {
                flag = 1;
                st += in[i];
                i++;
            }
            if(flag)
            {
                out+=mp[st];
                if(i!=sz)
                    i--;
            }
        }
        cout<< "Message #"<<c<<endl;
        string finale = "";
        int s = out.size();
        flag = 0;
        for(i=s-1; i>=0; i--)
        {
            if(!flag && out[i]==' ')
                continue;
            if(out[i]!=' ' && !flag)
                flag = 1;
            finale+=out[i];
        }
        rev(finale);
        cout<<finale<<endl;
        if(c<t)
            cout<<endl;
    }
    return 0;
}
