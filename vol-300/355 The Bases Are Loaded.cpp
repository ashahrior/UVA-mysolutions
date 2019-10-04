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

map <char , int> mp;
void mapping()
{
    int k = 10;
    for(char i = 'A'; i<='Z' ; i++, k++)
        mp[i] = k;
    return;
}

bool check(int sbase, string str)
{
    int sz = str.size();
    char bs = sbase + 48;
    for(int i=0; i<sz; i++)
    {
        if(str[i]>='0' && str[i]<= '9' )
        {
        	char c = str[i];
            int x = c - 48;
            if(x>=sbase)
            	return 0;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
        	char c = str[i];
            int x = mp[c];
            if(x>=sbase)
            	return 0;
        }
    }
    return 1;
}

lolo base_decimal(string in, int base)
{
    int sz = in.size() ;
    int k = 0 ;
    lolo sum = 0 ;
    for(int i = sz-1; i>=0; i--)
    {
    	int c;
    	if(in[i]>='0' && in[i]<='9')
    		c = in[i] - 48;
    	else
    	{
    		char x = in[i];
    		c = mp[x];
		}
		sum += ((lolo)(pow(base,k)))*c;
		k++;
	}
	return sum;
}

string decimal_base(lolo num, int base)
{
	lolo x, n = num;
	string str = "";
	x = n % base;
	if(x>=10 && x<=15)
		str+= char(55+x);
	else str+= x+48;
	n /= base;
	while(n!=0)
	{
		x = n%base;
		if(x>=10 && x<=15)
		str+= char(55+x);
		else str+= x+48;
		n /= base;
	}
	rev(str);
	return str;
}

int main()
{
    //read(); //16 10 FFFFFFFFFF
    //write();
    mapping();
    int sbase, tbase;
    string str;
    while(cin>>sbase>>tbase>>str)
    {
        bool flag = check(sbase,str);
        if(!flag)
        {
            cout<<str<< " is an illegal base "<<sbase<<" number\n";
            continue;
        }
        lolo deci = base_decimal(str, sbase);
        string res = decimal_base(deci,tbase);
        cout<< str<< " base "<< sbase<< " = "<< res<< " base "<<tbase<<endl;
    }
    return 0;
}

/**
Sample input
2 10 10101
5 3 126
15 11 A4C

Sample output
10101 base 2 = 21 base 10
126 is an illegal base 5 number
A4C base 15 = 1821 base 11
*/
