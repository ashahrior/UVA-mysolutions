#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "in.txt", "r", stdin);
    //freopen( "out.txt", "w", stdout);
    string word, dictionary[111], aster, exit, sword, temp;
    int i, n = 0;
    bool flag;
    exit = "XXXXXX", aster = "******" ;
    while(cin>>word && word!=exit)
    {
        dictionary[n] = word;
        n++;
    }
    sort(dictionary, dictionary+n);
    while(cin>>sword && sword!=exit)
    {
        flag=0;
        sort(sword.begin(), sword.end());
        for(i=0; i<n; i++)
        {
            temp = dictionary[i];
            sort(temp.begin(), temp.end());
            if(sword == temp)
            {
                cout<<dictionary[i]<<endl;
                flag=1;
            }
        }
        if(!flag)
            cout<< "NOT A VALID WORD"<<endl;
        cout<<aster<<endl;
    }
    return 0;
}
