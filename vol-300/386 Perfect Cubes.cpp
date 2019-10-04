#include<bits/stdc++.h>
using namespace std;
#define lolo long long
int main()
{
    lolo i, j, k, l, a, b, c, d, sum;
    for(i=6; i<=200; i++)
    {
        //a = (lolo)pow( (double)i,3);
        a = i*i*i;
        for(j=2; j<i; j++)
        {
            //b = (lolo)pow( (double)j,3);
            b = j*j*j;
            for(k=j; k<i; k++)
            {
                //c = (lolo)pow( (double)k,3);
                c = k*k*k;
                for(l=k; l<i; l++)
                {
                    //d = (lolo)pow( (double)l,3);
                    d = l*l*l;
                    if(a==(b+c+d))
                        printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n", i,j,k,l);
                }
            }
        }
    }
    return 0;
}
