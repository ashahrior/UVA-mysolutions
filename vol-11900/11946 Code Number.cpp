#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[90];
    int t, c, i, j, len;
    cin>>t;
    getchar();
    for(j=0; j<t; j++)
    {
        while(gets(str)!='\0')
        {
            len = strlen(str);
            if(len==0)
                break;
            for(i=0; i<len; i++)
            {
                if(str[i] == '4') cout<< "A";
                else if(str[i] == '8') cout<< "B";
                else if(str[i] == '3') cout<< "E";
                else if(str[i] == '6') cout<< "G";
                else if(str[i] == '1') cout<< "I";
                else if(str[i] == '0') cout<< "O";
                else if(str[i] == '9') cout<< "P";
                else if(str[i] == '5') cout<< "S";
                else if(str[i] == '7') cout<< "T";
                else if(str[i] == '2') cout<< "Z";
                else cout<<str[i];
            }
            cout<<endl;
        }
        if(j!=t-1)
            cout<<endl;
    }
    return 0;
}
