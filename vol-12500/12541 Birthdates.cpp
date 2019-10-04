#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen( "birthin.txt", "r", stdin);
	string name;
	map<int, string>mp;
	int n, i, day, month, year, age;
	priority_queue <int> yn;
	priority_queue <int> old;
	cin>>n;
	getchar();
	for(i=0; i<n; i++)
	{
		cin>>name;
		cin>>day>>month>>year;
		getchar();
		age = day+month*31+year*31*12;
		mp[age] = name;
		yn.push(age);
		old.push(-age);
	}
	cout<<mp[yn.top()]<<endl;
	cout<<mp[-old.top()]<<endl;
}


/* this has only cost me time and wrong answer
int main()
{
    freopen( "birthin.txt", "r", stdin);
    //freopen( "birthout.txt", "w", stdout);
    int n, m, d, i, maxi=0,x=0,y=0, mini=1000000;
    cin>>n;
    getchar();
    person p[101];
    int kom_year_list[101], kom_month_list[101], kom_day_list[101];
    int beshi_year_list[101], beshi_month_list[101], beshi_day_list[101];
    for(i=0; i<n; i++)
    {
        cin>>p[i].name;
        getchar();
        cin>>p[i].day;
        cin>>p[i].month;
        cin>>p[i].year;
        getchar();
        if(mini==p[i].year)
        {
            kom_year_list[x] = i;
            x++;
        }
        else if(mini>p[i].year)
        {
            x=0;
            kom_year_list[x] = i;
            x++;
            mini = p[i].year;
        }

        if(maxi==p[i].year)
        {
            beshi_year_list[y] = i;
            y++;
        }
        else if(maxi<p[i].year)
        {
            y=0;
            beshi_year_list[y] = i;
            y++;
            maxi = p[i].year;
        }
    }


    if((y-1)==0)
    {
        cout<<p[beshi_year_list[y-1]].name<<endl;
    }
    else
    {
        maxi=m=0, mini=1000000;
        for(i=0; i<y; i++)
        {
            if(maxi<p[beshi_year_list[i]].month)
            {
                m=0;
                beshi_month_list[m] = beshi_year_list[i];
                m++;
                maxi = p[beshi_year_list[i]].month;
            }
            else if(maxi==p[beshi_year_list[i]].month)
            {
                beshi_month_list[m] = beshi_year_list[i];
                m++;
            }
        }
        if((m-1)==0)
            cout<<p[beshi_month_list[m-1]].name<<endl;
        else
        {
            maxi=d=0, mini=1000000;
            for(i=0; i<m; i++)
            {
                if(maxi<p[beshi_month_list[i]].day)
                {
                    d=0;
                    beshi_day_list[d] = beshi_month_list[i];
                    d++;
                    mini = p[beshi_month_list[i]].day;
                }
                else if(maxi==p[beshi_month_list[i]].day)
                {
                    beshi_day_list[d] = beshi_month_list[i];
                    d++;
                }
            }
            if((d-1)==0)
                cout<<p[beshi_day_list[d-1]].name<<endl;
        }
    }

    if((x-1)==0)
    {
        cout<<p[kom_year_list[x-1]].name<<endl;
    }
    else
    {
        maxi=m=0, mini=1000000;
        for(i=0; i<x; i++)
        {
            if(mini>p[kom_year_list[i]].month)
            {
                m=0;
                kom_month_list[m] = kom_year_list[i];
                m++;
                mini = p[kom_year_list[i]].month;
            }
            else if(mini==p[kom_year_list[i]].month)
            {
                kom_month_list[m] = kom_year_list[i];
                m++;
            }
        }
        if((m-1)==0)
            cout<<p[kom_month_list[m-1]].name<<endl;
        else
        {
            maxi=d=0, mini=1000000;
            for(i=0; i<m; i++)
            {
                if(mini>p[kom_month_list[i]].day)
                {
                    d=0;
                    kom_day_list[d] = kom_month_list[i];
                    d++;
                    mini = p[kom_month_list[i]].day;
                }
                else if(mini==p[kom_month_list[i]].day)
                {
                    kom_day_list[d] = i;
                    d++;
                }
            }
            if((d-1)==0)
                cout<<p[kom_day_list[d-1]].name<<endl;
        }
    }

    return 0;
}
*/
