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
	lolo m, n, i;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		lolo andd;
		int k = 0;
		if(!m && !n)
			andd = 1;
		else if((n-m)+1>=3)
			andd = 0;
		else
		{
			if((m-1)%4==0)
				andd=0;
			else if((m+1)%4 == 0)
				andd = 1;
			else if(m%4==0)
				andd = m+1;
			else andd = m;

			if((n-1)%4==0)
				andd = andd & 0;
			else if((n+1)%4==0)
				andd = andd & 1;
			else if(n%4==0)
				andd = andd & (n+1);
			else andd = andd & n;
		}
		cout<<andd<<endl;
	}
	return 0;
}
