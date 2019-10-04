
#include<bits/stdc++.h>
using namespace std;

int num, pp, ppl;
int p[1005], w[1005];
int state[1005][35];

int knapsack(int pos, int wt)
{
    if(pos>num)
        return 0;
    if(state[pos][wt]!=-1)
        return state[pos][wt];
    int x = 0, y = 0;
    if(wt + w[pos] <=ppl)
        x = p[pos] + knapsack(pos+1,wt+w[pos]);
    y = knapsack(pos+1, wt);
    state[pos][wt] = max(x,y);
    return state[pos][wt];
}

//int knapsack(int p[], int wt[])
//{
//    int state[num+2][ppl+2];
//    for(int i=0; i<=num; i++)
//    {
//        for(int w = 0; w<=ppl; w++)
//        {
//            if(!i || !w)
//                state[i][w] = 0;
//            else if(wt[i-1]<=w)
//                state[i][w] = max( p[i-1] + state[i-1][w-wt[i-1]] , state[i-1][w]);
//            else
//                state[i][w] = state[i-1][w];
//        }
//    }
//    return state[num][ppl];
//}

int main()
{
    int t;
    cin>>t;
    for(int cs = 1; cs<=t; cs++)
    {
        cin>>num;
        //int p[num+2] , w[num+2];
        for(int i=1; i<=num; i++)
            cin>>p[i]>>w[i];
        cin>>pp;
        int shop = 0;
        for(int i = 0; i<pp; i++)
        {
            cin>>ppl;
            memset(state,-1,sizeof(state));
            shop += knapsack(1,0);
        }
        cout<<shop<<endl;
    }
    return 0;
}


/**
Sample Input
2
3
72 17
44 23
31 24
1
26
6
64 26
85 22
52 4
99 18
39 13
54 9
4
23
20
20
26
Sample Output
72
514
*/
