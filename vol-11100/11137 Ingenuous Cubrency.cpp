#include<bits/stdc++.h>
using namespace std;
#define lolo long long

lolo coins[] = {1 , 8 , 27 , 64 , 125 , 216 , 343 , 512 , 729 , 1000 , 1331 , 1728 ,
				2197 , 2744 , 3375 , 4096 , 4913 , 5832 , 6859 , 8000 , 9261};

lolo state[22][10002];

lolo changes(lolo pos, lolo val)
{
	if(pos>20) return 0;

	if(state[pos][val]!=-1)
		return state[pos][val];
	lolo x = 0, y = 0;

	if(val-coins[pos]==0)
		x = 1;
	else if(val-coins[pos]>0)
		x = changes(pos, val-coins[pos]);
	y = changes(pos+1,val);
	return state[pos][val] = x+y;
}


int main()
{
    lolo make;
    memset(state,-1,sizeof(state));
    while(cin>>make)
    {
    	if(!make)
    	{
    		cout<<1<<endl;
    		continue;
		}
		cout<< changes(0,make) <<endl;
	}
    return 0;
}

/**
Sample Input
10
21
77
9999
Sample Output
2
3
22
440022018293
*/
