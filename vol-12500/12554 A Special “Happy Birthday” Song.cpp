#include<bits/stdc++.h>
using namespace std;
string song[] = { "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you",
                  "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };

int main()
{
    //freopen("birthday.txt", "r", stdin);
    int t, i, j, l;
    string namez[150];
    bool flag[150];
    cin>>t;
    getchar();
    for(i=0; i<t; i++)
        cin>>namez[i];
    i=j=0;
    while(1)
    {
        cout<<namez[i++]<<": "<<song[j++]<<endl;
        flag[i-1]=1;
        if(flag[t-1] && j==16)
            break;
        if(i==t)
            i=0;
        if(j==16)
            j=0;
    }
    return 0;
}
