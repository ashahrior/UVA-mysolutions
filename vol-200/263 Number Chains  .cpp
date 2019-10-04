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

void chain(string str)
{
    int sz = str.size();
    map<lolo,bool> mp;
    string cstr = str;
    lolo count = 0;
    while(1)
    {
        count++;
        sort(cstr.begin(),cstr.end());
        string sstr = cstr;
        reverse(cstr.begin(),cstr.end());
        string bstr = cstr;
        lolo big, small;
        stringstream s1(bstr);
        s1>>big;
        s1.clear();
        stringstream s2(sstr);
        s2>>small;
        s2.clear();
        lolo r = big - small;
        stringstream s3;
        s3<<r;
        string res;
        s3>>res;
        s3.clear();
        cout<<big<< " - "<< small<< " = " << r<<endl;
        cstr = res;
        if(mp[r]==1)
            break;
        mp[r] = 1;
    }
    cout<< "Chain length "<< count<<endl<<endl;
    return;
}

int main()
{
    //read();
    string str;
    while(cin>>str)
    {
        if(str=="0")
            break;
        cout<< "Original number was "<<str<<endl;
        chain(str);
    }
    return 0;
}

/**
Sample Input

123456789
1234
444
0

Sample Output

Original number was 123456789
987654321 - 123456789 = 864197532
987654321 - 123456789 = 864197532
Chain length 2

Original number was 1234
4321 - 1234 = 3087
8730 - 378 = 8352
8532 - 2358 = 6174
7641 - 1467 = 6174
Chain length 4

Original number was 444
444 - 444 = 0
0 - 0 = 0
Chain length 2
*/
