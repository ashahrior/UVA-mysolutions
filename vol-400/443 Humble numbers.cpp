#include<bits/stdc++.h>
using namespace std;

#define lolo long long
map<lolo,bool>mp;
vector<lolo> hmb;

void fun(lolo num)
{
	if(num > 2000000000)
		return;
	if(mp[num]==1)
		return;
	else
	{
		hmb.push_back(num);
		mp[num] = 1;
		fun(num*2);
		fun(num*3);
		fun(num*5);
		fun(num*7);
	}
}

void display(lolo num)
{
	lolo n = num;
		n--;
		stringstream ss;
		ss<<num;
		string str;
		ss>>str;
		if(str.size()<2)
		{
			if(num==1)
				cout<< "The 1st humble number is ";
			else if(num==2)
				cout<< "The 2nd humble number is ";
			else if(num==3)
				cout<< "The 3rd humble number is ";
			else
				printf("The %lldth humble number is ", num);
			cout<<hmb[n]<<"."<<endl;
		}
		else
		{
			int sz = str.size();
			if(str[sz-2] != '1')
			{
				if(str[sz-1]=='1')
					printf("The %lldst humble number is ", num);
				else if(str[sz-1] == '2')
					printf("The %lldnd humble number is ", num);
				else if(str[sz-1] == '3')
					printf("The %lldrd humble number is ", num);
				else
					printf("The %lldth humble number is ", num);
				cout<<hmb[n]<<"."<<endl;
			}
			else
			{
				printf("The %lldth humble number is ", num);
				cout<<hmb[n]<<"."<<endl;
			}
		}
}

int main()
{
	lolo num;
	mp.clear();
	fun(1);
	sort(hmb.begin(),hmb.end());
	while(cin>>num && num)
	{
		display(num);
	}
	return 0;
}

/*
 Sample Input
1
2
3
4
11
12
13
21
22
23
100
1000
5842
0
Sample Output
The 1st humble number is 1.
The 2nd humble number is 2.
The 3rd humble number is 3.
The 4th humble number is 4.
The 11th humble number is 12.
The 12th humble number is 14.
The 13th humble number is 15.
The 21st humble number is 28.
The 22nd humble number is 30.
The 23rd humble number is 32.
The 100th humble number is 450.
The 1000th humble number is 385875.
The 5842nd humble number is 2000000000.
* */
