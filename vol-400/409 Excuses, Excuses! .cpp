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

map <string,bool> mp;
vector <string> excuse;
int freq;

void process(string str)
{
    string word = "";
    int sz = str.size();
    int countt = 0;

    for(int j = 0; j<sz; j++)
    {
        char x = tolower(str[j]);

        if(isalpha(x))
            word += x;

        else
        {
            if(mp[word]==1)
                countt++;
            word = "";
        }
    }

    if(countt==freq)
        excuse.push_back(str);
    else if(countt>freq)
    {
        excuse.clear();
        excuse.push_back(str);
        freq = countt;
    }
    return;
}

int main()
{
    int n, k, t=1;
    while(cin>>n>>k)
    {
        string keys;
        mp.clear();
        excuse.clear();
        freq = 0;

        for(int i = 0; i<n; i++)
        {
            cin>>keys;
            mp[keys] = 1;
        }
        getchar();

        for(int i = 0; i<k; i++)
        {
            string str;
            getline(cin,str);
            process(str);
        }

        cout<< "Excuse Set #"<<t++<<endl;
        int sz = excuse.size();
        for(int i = 0; i<sz; i++)
            cout<<excuse[i]<<endl;
        cout<<endl;
    }
    return 0;
}

/**
Sample Input
5 3
dog
ate
homework
canary
died
My dog ate my homework.
Can you believe my dog died after eating my canary... AND MY HOMEWORK?
This excuse is so good that it contain 0 keywords.
6 5
superhighway
crazy
thermonuclear
bedroom
war
building
I am having a superhighway built in my bedroom.
I am actually crazy.
1234567890.....,,,,,0987654321?????!!!!!!
There was a thermonuclear war!
I ate my dog, my canary, and my homework ... note outdated keywords?

Sample Output
Excuse Set #1
Can you believe my dog died after eating my canary... AND MY HOMEWORK?

Excuse Set #2
I am having a superhighway built in my bedroom.
There was a thermonuclear war!
*/
