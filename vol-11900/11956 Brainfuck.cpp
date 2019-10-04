#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "in.txt", "r", stdin);
    int memory[105], c, t;
    string str;
    cin>>t;
    getchar();
    for(int c=1; c<=t; c++)
    {
        cin>>str;
        getchar();
        memset(memory, 0, sizeof(memory));
        int i, p=0, sz = str.size();
        for(i=0; i<sz; i++)
        {
            if(str[i]=='>')
                p = (p+1)%100;
            else if(str[i]=='<')
                p = (p-1+100)%100;
            else if(str[i]=='+')
                memory[p] = (memory[p]+1)%256;
            else if(str[i]=='-')
                memory[p] = (memory[p]-1+256)%256;
        }
        cout<< "Case "<<c<<":";
        for(i=0; i<100; i++)
            printf(" %02X", memory[i]);
        cout<<endl;
    }
    return 0;
}
