#include<bits/stdc++.h>
using namespace std;
#define read() freopen("in.txt", "r", stdin)
#define write() freopen("out.txt", "w", stdout)

vector <string> grid;
int row, col, inix, iniy;
char dir='N';
string cmd;

void canMove()
{
    switch(dir)
    {
    case 'N':
        if(grid[inix-1][iniy]!='*')
            inix--;
        break;
    case 'S':
        if(grid[inix+1][iniy]!='*')
            inix++;
        break;
    case 'E':
        if(grid[inix][iniy+1]!='*')
            iniy++;
        break;
    case 'W':
        if(grid[inix][iniy-1]!='*')
            iniy--;
        break;
    }
    return;
}

void rightTurn()
{
    switch(dir)
    {
    case 'N':
        dir = 'E';
        break;
    case 'S':
        dir = 'W';
        break;
    case 'E':
        dir = 'S';
        break;
    case 'W':
        dir = 'N';
        break;
    }
    return;
}

void leftTurn()
{
    switch(dir)
    {
    case 'N':
        dir = 'W';
        break;
    case 'S':
        dir = 'E';
        break;
    case 'E':
        dir = 'N';
        break;
    case 'W':
        dir = 'S';
        break;
    }
}

void traverse()
{
    int sz = cmd.size();
    for(int i = 0; i<sz; i++)
    {
        if(cmd[i]=='Q')
            break;
        if(cmd[i]=='F')
        {
            canMove();
        }
        else if(cmd[i]=='R')
        {
            rightTurn();
        }
        else if(cmd[i]=='L')
        {
            leftTurn();
        }
    }
    cout<<inix+1<< " "<< iniy+1<< " " <<dir<<endl;
}

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        dir = 'N';
        grid.clear();
        cin>>row>>col;
        getchar();
        for(int i = 0; i<row; i++)
        {
            string str;
            getline(cin,str);
            grid.push_back(str);
        }
        cin>>inix>>iniy;
        inix--, iniy--;
        cmd = "";
        char str;
        cin>>str;
        while(str!='Q')
        {
            if(str=='R' || str=='L' || str=='F')
                cmd += str;
            cin>>str;
        }
        traverse();
        if(t)
            cout<<endl;
    }
}

/**
Sample Input
2

7 8
********
* * * **
* *    *
* * ** *
* * *  *
*   * **
********
2 4
RRFLFF FFR
FF
RFFQ

7 8
********
* * * **
* *    *
* * ** *
* * *  *
*   * **
********
2 4
RRFLFF FFR
FF
RFFQ

Sample Output
5 6 W

5 6 W
*/
