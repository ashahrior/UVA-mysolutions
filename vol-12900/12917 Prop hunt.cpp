#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p, h, o, dif;
    while(cin>>p>>h>>o)
    {
        dif = o-p;
        if(dif<h)
            cout<< "Hunters win!\n";
        else
            cout<< "Props win!\n";
    }
    return 0;
}
