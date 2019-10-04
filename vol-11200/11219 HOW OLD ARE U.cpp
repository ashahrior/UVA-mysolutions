#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cd, cm, cy, bd, bm, by, i, j, k, t,age;
    char c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        //cout<<endl;
        cin>>cd>>c>>cm>>c>>cy;
        cin>>bd>>c>>bm>>c>>by;
        if(bd>cd)
        {
            cd+=30;
            bm++;
        }
        if(bm>cm)
        {
            cm+=12;
            by++;
        }
        age = cy-by;
        if(age<0)
            cout<<"Case #"<<i<<": Invalid birth date"<<endl;
        else if(age>130)
            cout<<"Case #"<<i<<": Check birth date"<<endl;
        else
            cout<<"Case #"<<i<<": "<<age<<endl;
    }
    return 0;
}
