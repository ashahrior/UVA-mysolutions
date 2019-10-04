#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    double a, b, c, d, e, f, x, y;
    while(cin>>a>>b>>c>>d>>e>>f)
    {
        if(!a && !b && !c && !d && !e && !f)
            break;

        /*if( (a==d && b==e) || (a==b && d==e) || (!a && !b) || (!d && !e) || (!a && !d) || (!b && !e) )
            cout<< "No fixed point exists.\n";*/
        if(!(a*e - b*d))
            cout<< "No fixed point exists.\n";
        else
        {
            x = (c*e - b*f)/(a*e-b*d);
            if(b)
                y = (c-a*x)/b;

            else
                y = (f-d*x)/e;

            printf("The fixed point is at %.02lf %.02lf.\n", x, y);
        }
    }
    return 0;
}
