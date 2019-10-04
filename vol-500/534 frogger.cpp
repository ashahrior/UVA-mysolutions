#include<bits/stdc++.h>
#define lolo long long int
using namespace std;
int main()
{
    lolo x[210], y[210], i, j, k, stones, m, n, o, cases=0;
    double g[210][210];
    while(cin>>stones&&stones)
    {
        for(i=0; i<stones; i++)
            cin>>x[i]>>y[i];
        for(i=0; i<stones; i++)
        {
            for(j=i+1; j<stones; j++)
                g[i][j]=g[j][i]=sqrt((x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]));

        }

        for(k=0; k<stones; k++)
        {
            for(i=0; i<stones; i++)
            {
                for(j=0; j<stones; j++)
                    g[i][j] = min(g[i][j],max(g[i][k],g[k][j]));
            }
        }
        cases++;
        cout<<"Scenario #"<<cases<<endl;
        cout<<"Frog Distance = ";
        printf("%.03lf\n",g[0][1]);
        cout<<endl;
    }
    return 0;
}

