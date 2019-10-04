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
#define rev(a) reverse(a.begin(),a.end())
#define gl(a) getline(cin,a)

#define N 128
#define sz 1001

string qwerty = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>? ";
string dvorak = "`123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\" ";
char mapp[N];

void set_map()
{
    for(int i=0; dvorak[i]; i++)
		mapp[ qwerty[i] ] = dvorak[i];
    return;
}

int main()
{
    set_map();
    string input, output;
	while(gl(input))
	{
		output="";
		int i;
		for(i=0; input[i]; i++)
			output+= mapp[ input[i] ];

		cout<<output<<endl;
	}
	return 0;
}
