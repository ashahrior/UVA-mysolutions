#include<bits/stdc++.h>
using namespace std;
int main()
{
    int key[105], let[105], t, n, i;
    char c=34, space=32;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0; i<n; i++)
            cin>>key[i];
        for(i=0; i<n; i++)
            cin>>let[i];
        for(i=0; i<n; i++)
        {
            if(key[i]==1)
            {
                if(let[i]==1)
                    cout<< ".";
                else if(let[i]==2)
                    cout<< ",";
                else if(let[i]==3)
                    cout<< "?";
                else if(let[i]==4)
                    cout<<c;
            }
            else if(key[i]==2)
            {
                if(let[i]==1)
                    cout<< "a";
                else if(let[i]==2)
                    cout<< "b";
                else if(let[i]==3)
                    cout<< "c";
            }
            else if(key[i]==3)
            {
                if(let[i]==1)
                    cout<< "d";
                else if(let[i]==2)
                    cout<< "e";
                else if(let[i]==3)
                    cout<< "f";
            }
            else if(key[i]==4)
            {
                if(let[i]==1)
                    cout<< "g";
                else if(let[i]==2)
                    cout<< "h";
                else if(let[i]==3)
                    cout<< "i";
            }
            else if(key[i]==5)
            {
                if(let[i]==1)
                    cout<< "j";
                else if(let[i]==2)
                    cout<< "k";
                else if(let[i]==3)
                    cout<< "l";
            }
            else if(key[i]==6)
            {
                if(let[i]==1)
                    cout<< "m";
                else if(let[i]==2)
                    cout<< "n";
                else if(let[i]==3)
                    cout<< "o";
            }
            else if(key[i]==7)
            {
                if(let[i]==1)
                    cout<< "p";
                else if(let[i]==2)
                    cout<< "q";
                else if(let[i]==3)
                    cout<< "r";
                else if(let[i]==4)
                    cout<< "s";
            }
            else if(key[i]==8)
            {
                if(let[i]==1)
                    cout<< "t";
                else if(let[i]==2)
                    cout<< "u";
                else if(let[i]==3)
                    cout<< "v";
            }
            else if(key[i]==9)
            {
                if(let[i]==1)
                    cout<< "w";
                else if(let[i]==2)
                    cout<< "x";
                else if(let[i]==3)
                    cout<< "y";
                else if(let[i]==4)
                    cout<< "z" ;
            }
            else if(key[i]==0)
                cout<<space;
        }
        cout<<endl;
    }
    return 0;
}
