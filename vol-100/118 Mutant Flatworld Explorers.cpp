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

int X, Y, x, y, lost[55][55];
char p;
string str;

void process_result()
{
	int sz = str.size();
	bool flag = false;
	for(int i = 0; i<sz; i++)
	{
		if(str[i]=='R')
		{
			switch(p)
			{
				case 'N': p = 'E'; break;
				case 'S': p = 'W'; break;
				case 'E': p = 'S'; break;
				case 'W': p = 'N'; break;
			}
		}
		else if(str[i]=='L')
		{
			switch(p)
			{
				case 'N': p = 'W'; break;
				case 'S': p = 'E'; break;
				case 'E': p = 'N'; break;
				case 'W': p = 'S'; break;
			}
		}
		else
		{
			switch(p)
			{
				case 'N': y++; break;
				case 'S': y--; break;
				case 'E': x++; break;
				case 'W': x--; break;
			}
		}
		if(x<0 || y<0 || x>X || y>Y)
		{
			switch(p)
			{
				case 'N': y--; break;
				case 'S': y++; break;
				case 'E': x--; break;
				case 'W': x++; break;
			}
			if(lost[x][y]==1)
				continue;
			lost[x][y] = 1;
			flag = true;
			break;
		}
	}

	if(flag)
		cout<<x<< " "<<y<< " "<<p <<" LOST"<<endl;
	else cout<<x<< " "<< y<< " "<< p <<endl;

	return;
}

int main()
{
	cin>>X>>Y;
	while(cin>>x>>y>>p)
	{
		cin>>str;
		process_result();
	}
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

