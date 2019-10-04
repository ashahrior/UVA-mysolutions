#include<bits/stdc++.h>
using namespace std;
bool calc(double x0, double y0, double x1, double y1, double cx, double cy, double r);

int main()
{
    int t;
    double x0, y0, x1, y1, cx, cy, r;
    cin>>t;
    while(t--)
    {
        cin>>x0>>y0>>x1>>y1>>cx>>cy>>r;
        bool verdict = calc(x0, y0, x1, y1, cx, cy, r);
        if(verdict)
            cout<< "YES\n";
        else
            cout<< "NO\n";
    }
    return 0;
}

bool calc(double x0, double y0, double x1, double y1, double cx, double cy, double r)
{
    double len = r*5;
    double flen = x1 - x0;
    if(len!=flen)
        return 0;

    double wid = r*3;
    double fwid = y1 - y0;
    if(wid!=fwid)
        return 0;

    double c1 = r*2.25;
    double fc1 = cx - x0;
    if(c1!=fc1)
        return 0;

    double c2 = r*1.5;
    double fc2 = cy - y0;
    if(c2!=fc2)
        return 0;

    return 1;
}
