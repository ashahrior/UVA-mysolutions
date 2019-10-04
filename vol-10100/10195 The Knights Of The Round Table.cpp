#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, s, r;
    while(cin>>a>>b>>c)
    {
        if(a==0 || b==0 || c==0)
        {
            cout<< "The radius of the round table is: 0.000"<<endl;
            continue;
        }
        s = (a+b+c)/2;
        r =((s-a)*(s-b)*(s-c))/s;
        r = sqrt(r);
        cout<<"The radius of the round table is: ";
        printf("%.03lf\n",r);
    }
    return 0;
}
