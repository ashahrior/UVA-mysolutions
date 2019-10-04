#include<bits/stdc++.h> /// Catalan numbers: C[0] = 1 ... C[n+1] = 2(2n+1)/(n+2) * C[n]
using namespace std;
#define lolo unsigned long long
lolo cat[30];
void catalan()
{
    int i;
    cat[0] = 1;
    for(i=0; i<25; i++)
    {
        cat[i+1] = ((4*i+2)*cat[i])/(i+2);
    }
}

int main()
{
    catalan();
    lolo n;
    int i;
    while(cin>>n)
    {
        for(i=1; i<25; i++)
        {
            if(cat[i]==n)
            {
                cout<< i <<endl;
                break;
            }
        }
    }
    return 0;
}
