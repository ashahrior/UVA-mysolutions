#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    char num[200];
    int c, i, j, len, x, m, t, number;
    cin>>t;
    getchar();
    for(c=1; c<=t; c++)
    {
        cin>>input;
        cout<<"Case "<<c<<": ";
        len = input.size();
        for(i=0; i<len; i++)
        {
            x=0;
            if(input[i]>='0' && input[i]<='9')
            {
                for(j=i; input[j]>='0' && input[j]<='9'; j++)
                {
                    num[x++] = input[j];
                }
                num[x]='\0';
                number = atoi(num);
                for(m=0; m<number; m++)
                    cout<<input[i-1];
                i = j-1;
            }
        }
        cout<<endl;
    }
    return 0;
}
