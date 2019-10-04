#include<bits/stdc++.h>
using namespace std;
int main()
{
    ///freopen( "palindromes.txt", "r", stdin );
    int i, len;
    string str, reg, mir;
    char c[1000];
    memset(c,0,sizeof(c));
    c['A'] = 'A';
    c['E'] = '3';
    c['H'] = 'H';
    c['I'] = 'I';
    c['J'] = 'L';
    c['L'] = 'J';
    c['M'] = 'M';
    c['O'] = 'O';
    c['S'] = '2';
    c['T'] = 'T';
    c['U'] = 'U';
    c['V'] = 'V';
    c['W'] = 'W';
    c['X'] = 'X';
    c['Y'] = 'Y';
    c['Z'] = '5';
    c['1'] = '1';
    c['2'] = 'S';
    c['3'] = 'E';
    c['5'] = 'Z';
    c['8'] = '8';
    while(cin>>str)
    {
        reg = mir = "";
        len = str.size();
        for(i=len-1; i>=0; i--)
        {
            reg+=str[i];
            mir+=c[str[i]];
        }
        if(str!=reg && str!=mir)
            cout<<str<< " -- is not a palindrome."<<endl<<endl;
        else if(str==reg && str!=mir)
            cout<<str<< " -- is a regular palindrome."<<endl<<endl;
        else if(str!=reg && str==mir)
            cout<<str<< " -- is a mirrored string."<<endl<<endl;
        else if(str==reg && str==mir)
            cout<<str<< " -- is a mirrored palindrome."<<endl<<endl;
    }
    return 0;
}
