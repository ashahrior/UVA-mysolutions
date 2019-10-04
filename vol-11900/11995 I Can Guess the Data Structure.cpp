#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mclr(a) memset(a,0,sizeof(a))
#define mset(a) memset(a,-1,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
int main()
{
    //read();
    int n, i, c, num;
    while(cin>>n)
    {
        queue <int> q;
        priority_queue <int> pq;
        stack <int> st;
        //q.clear(), pq.clear(), st.clear(); /// no such function
        bool qf, pqf, stf;
        qf = pqf = stf = true;
        for(i=1; i<=n; i++)
        {
            cin>>c>>num;
            if(c==1)
            {
                if(qf)
                    q.push(num);
                if(pqf)
                    pq.push(num);
                if(stf)
                    st.push(num);
            }
            if(c==2)
            {
                if(qf)
                {
                    if(!q.empty() && num == q.front())
                        q.pop();
                    else qf = 0;
                }
                if(pqf)
                {
                    if(!pq.empty() && num == pq.top())
                        pq.pop();
                    else pqf=0;
                }
                if(stf)
                {
                    if(!st.empty() && num== st.top() )
                        st.pop();
                    else stf = 0;
                }
            }
        }
        if(stf && !qf && !pqf)
            cout<< "stack" <<endl;
        else if( qf && !stf && !pqf )
            cout<< "queue" <<endl;
        else if( pqf && !stf && !qf )
            cout<< "priority queue"<<endl;
        else if((stf || qf || pqf) )
            cout<< "not sure"<<endl;
        else
            cout<< "impossible"<<endl;
    }
    return 0;
}
