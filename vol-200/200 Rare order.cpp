#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen( "in.txt", "r", stdin);
    int alpha[26] = {0};
    //char str[50];
    string str;
    char line[5000][50];
    //string line[5000];
    int i=0, j, sz;
    while(cin>>str)
    {
        if(str=="#")
            break;
        //int len = strlen(str);
        int len = str.size(); // tried to solve this problem with vector but there was resizing problem
        for(j=0; j<len; j++)
            line[i][j] = str[j];
        while(j!=21)
            line[i][j++] = 'a';
        i++;
    }
    sz = i; // this would've been solve more easily using set if it allowed sorted output
    for(i=0; i<21 ; i++)
    {
        for(j=0; j<sz; j++)
        {
            if(line[j][i]>64 && line[j][i]<91)
                alpha[ (line[j][i]-65) ]++;
            if(alpha[ (line[j][i]-65) ]==1)
                cout<<line[j][i];
        }
    }
    cout<<endl;
    return 0;
}

