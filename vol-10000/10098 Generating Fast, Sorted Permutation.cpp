#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[15];
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(str);
        int len = strlen(str); //.size();
        sort(str,str+len);
        puts(str);
        while(next_permutation(str,str+len))
            puts(str);
        cout<<endl;
    }
    return 0;
}
