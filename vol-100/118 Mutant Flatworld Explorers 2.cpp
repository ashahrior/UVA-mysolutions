#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

int X, Y, x, y, xx, yy, sz;
char p, pp;
string str;
bool N = 0, S = 0, E = 0, W = 0, LOST = 0;
int los[55][55];

void reset()
{
    N = S = E = W = 0;
    return;
}

void set_state()
{
    switch(p)
    {
    case 'N':
        N = 1;
        break;
    case 'S':
        S = 1;
        break;
    case 'E':
        E = 1;
        break;
    case 'W':
        W = 1;
        break;
    }
    return;
}

bool checker()
{
    if(xx>X || xx<0 || yy<0 || yy>Y)
        return true;
    return false;
}

void process_result()
{
    bool check = false;
    sz = str.size();
    for(int i = 0; i<sz; i++)
    {
        if(str[i]=='R')
        {
            reset();
            if(p=='N')
                E = 1 , p = 'E';

            else if(p=='S')
                W = 1 ,	p = 'W';

            else if(p=='E')
                S = 1 , p = 'S';

            else if(p=='W')
                N = 1 , p = 'N';
        }

        else if(str[i]=='L')
        {
            reset();
            if(p=='N')
                W = 1 , p = 'W';

            else if(p=='S')
                E = 1 , p = 'E';

            else if(p=='E')
                N = 1 , p = 'N';

            else if(p=='W')
                S = 1 , p = 'S';
        }

        else if(str[i]=='F')
        {
            if(N)
                yy = y+1, xx = x, p = 'N' ;
            else if(S)
                yy = y-1, xx = x, p = 'S' ;
            else if(E)
                xx = x+1, yy = y, p = 'E' ;
            else if(W)
                xx = x-1, yy = y, p = 'W' ;

            check = checker();
            if(check)
            {
                if(N) yy--;
                else if(S) yy++;
                else if(E) xx--;
                else xx++;
                if( los[xx][yy] == 1 )
                    continue;

                los[xx][yy] = 1;
                break;
            }
            x = xx, y = yy;
        }
    }

    if(check)
        cout<<x<< " "<< y<< " "<<p<< " LOST"<<endl;
    else cout<<x<<" "<< y<<" "<<p<<endl;

    return;
}

int main()
{
    cin>>X>>Y;
    while(cin>>x>>y>>p)
    {
        cin>>str;
        reset();
        set_state();
        process_result();
    }

    return 0;
}

/*
Sample Input
5 3
1 1 E
RFRFRFRF
3 2 N
FRRFLLFFRRFLL
0 3 W
LLFFFLFLFL
Sample Output
1 1 E
3 3 N LOST
2 3 S
*/


