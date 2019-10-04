#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sz, i, j, x, sym, consonant, vowel;
    string str;
    char listt[]= {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };
    while(getline(cin,str))
    {
        sz = str.size();

        for(i=0; i<sz; i++)
        {
            if( (str[i]<65) || (str[i]>90) && (str[i]<97) || (str[i]>122) )
            {
                cout<<str[i];
                continue;
            }
            consonant = 1, vowel = 0;
            for(j=0; j<10; j++)
            {
                if(str[i]==listt[j])
                {
                    vowel=1;
                    consonant=0;
                    break;
                }
            }
            if(consonant)
            {
                x=i;
                while( (str[x+1]>='a' && str[x+1]<='z') || (str[x+1]>='A' && str[x+1]<='Z') )
                {
                    cout<<str[x+1];
                    x++;
                }
                cout<<str[i]<<"ay";
                i=x;
                sym=0;
            }
            else if(vowel)
            {
                x=i;
                while( (str[x]>='a' && str[x]<='z') || (str[x]>='A' && str[x]<='Z') )
                {
                    cout<<str[x];
                    x++;
                }
                cout<<"ay";
                i=x-1;
                sym=0;
            }
        }
        cout<<endl;
    }
    return 0;
}
