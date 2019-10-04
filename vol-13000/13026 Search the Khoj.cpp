#include<bits/stdc++.h>
using namespace std;
int main()
{
    string daddy[1000];
    string mommy;
    int t, c, i, d, dif, mom_len, j;
    cin>>t;
    for(c=1; c<=t; c++)
    {
        cin>>d;
        getchar();
        for(i=0; i<d; i++)
            cin>>daddy[i];
        cin>>mommy;
        mom_len = mommy.size();
        cout<<"Case "<<c<<":"<<endl;
        for(i=0; i<d; i++)
        {
            dif=0;
            for(j=0; j<mom_len; j++)
            {
                if(mommy[j]!=daddy[i][j])
                {
                    dif++;
                }
            }
            if(dif==0 || dif==1)
                cout<<daddy[i]<<endl;
        }
    }
    return 0;
}
