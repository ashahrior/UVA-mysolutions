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

const string key = "the quick brown fox jumps over the lazy dog" ;

string inp[111];
int n=0, key_sz;
int lenz[111];
map <char, char> mp;
bool mp_vis[300] , inp_vis[300];

int store_str()
{
	int i=1;
	gl(inp[i]);
	lenz[i] = inp[i].size();
	while(inp[i][0]!='\0')
	{
		i++;
		gl(inp[i]);
		lenz[i] = inp[i].size();
	}
	return i-1;
}

int find_key()
{
	int c, i;
	for(c=1; c<=n; c++)
	{
		if( lenz[c]==key_sz && inp[c][3]== ' ' )
		{
			 mset(mp_vis,0), mset(inp_vis,0);
			 for(i=0; i<key_sz; i++ )
			 {
			 	if( !mp_vis[key[i]] && !inp_vis[inp[c][i]])
			 	{
			 		mp[inp[c][i]] = key[i];
					mp_vis[key[i]] = inp_vis[inp[c][i]] = 1;
				}
				else if(mp[inp[c][i]]!=key[i])
					break;
			 }
			 if(i==key_sz)
			 	return c;
		}
	}
	return 0;
}

void print()
{
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<lenz[i]; j++)
			printf("%c", mp[inp[i][j]]);
		cout<<endl;
	}
	return;
}

void str_clear()
{
    for(int i=0; i<=n; i++)
        inp[i].clear();
    return;
}

int main()
{
    //read();
	int t, r;
	key_sz = 43;
	cin>>t;
	getchar();
	getchar();
	while(t>0)
	{
		mp.clear();
		str_clear();
		mset(lenz,0);
		n = store_str();
		r = find_key();
		if(!r)
			cout<< "No solution.\n";
		else print();
		if(t!=1)
			cout<<endl;
		t--;
	}
	return 0;
}

/**
Sample Input
1

vtz ud xnm xugm itr pyy jttk gmv xt otgm xt xnm puk ti xnm fprxq
xnm ceuob lrtzv ita hegfd tsmr xnm ypwq ktj
frtjrpgguvj otvxmdxd prm iev prmvx xnmq


Sample Output
now is the time for all good men to come to the aid of the party
the quick brown fox jumps over the lazy dog
programming contests are fun arent they
*/
