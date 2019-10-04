#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)
#define mset(a,b) memset(a,b,sizeof(a))
#define pb(a) push_back(a)
#define pf printf
#define sf scanf
#define LL unsigned long long
#define lolo long long
#define PI acos(-1)
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)
#define v_sort(v) sort(v.begin(),v.end())
#define sortt(a,n) sort(a, a+n)
#define transform_down(word) transform(word.begin(), word.end(), word.begin(), ::tolower)
#define transform_up(word) transform(word.begin(), word.end(), word.begin(), ::toupper)

int main()
{
    //read();
    int i, c = 1, n;
    while(cin>>n)
    {
        if(!n) break;
        int sample[n+1];
        int mark[15];
        mset(mark,0);
        for(i=0; i<n; i++)
        {
            cin>>sample[i];
            int x = sample[i];
            mark[x]++;
        }
        //for(i=0; i<n; i++)
          //  pf("sample = %d --- mark  = %d\n", sample[i], mark[sample[i]]);
        pf("Game %d:\n", c++);
        while(1)
        {
            int guess[n+1];
            int gmark[15];
            mset(gmark,0);
            bool flag = 0;
            for(i=0; i<n; i++)
            {
                cin>>guess[i];
                if(!flag && guess[i]>0)
                    flag = 1;
                int x = guess[i];
                gmark[x] = mark[x];
            }
            if(!flag)
                break;

            int strong = 0, weak = 0 ;
            for(i=0; i<n; i++)
            {
                if(sample[i]==guess[i])
                {
                    strong++;
                    int x = guess[i];
                    guess[i] = -1;
                    gmark[x]--;
                    //pf("strong : sample = %d  GMARK = %d\n", sample[i], gmark[x]);
                }
            }
            for(i=0; i<n; i++)
            {
                int x = guess[i];
                if(guess[i]>0 && sample[i]!=guess[i] && mark[x] && gmark[x]>0)
                {
                    weak++;
                    gmark[x]--;
                    //pf("weak : sample = %d  guess = %d\n", sample[i], guess[i]);
                }
            }
            for(i=0; i<4; i++)
                cout<< " ";
            cout<< "(" << strong << "," << weak<< ")"<<endl;
        }
    }
    return 0;
}

/**
4
1 3 5 5
1 1 2 3
4 3 3 5
6 5 5 1
6 1 3 5
1 3 5 5
0 0 0 0
10
1 2 2 2 4 5 6 6 6 9
1 2 3 4 5 6 7 8 9 1
1 1 2 2 3 3 4 4 5 5
1 2 1 3 1 5 1 6 1 9
1 2 2 5 5 5 6 6 6 7
0 0 0 0 0 0 0 0 0 0
0
*/
