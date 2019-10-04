#include<bits/stdc++.h>
using namespace std;
int main()
{
    string field;
    unsigned int t, n, i, len, j, scrow;
    cin>>t;
    getchar();
    for(j=1; j<=t; j++)
    {
        cin>>n;
        int scrow = 0;
        getchar();
        getline(cin,field);
        for(i=0; i<=n; )
        {
            if(field[i]=='.')
            {
                i+=3;
                scrow++;
            }
            else
                i++;
        }
        cout<<"Case "<<j<<": "<<scrow<<endl;
    }
    return 0;
}
