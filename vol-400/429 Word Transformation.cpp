#include<bits/stdc++.h>
using namespace std;

//int checkdif(string x, string y);

int main()
{
    int t;
    cin>>t;
    getchar();
    bool blank = 0;
    while(t--)
    {
        if(blank)
            cout<<endl;
        blank = 1;
        string str;
        map <string,int> mp1 ;
        map <int,string> mp2;
        vector <string> lst;
        int x = 1;
        while(cin>>str && str!="*")
        {
            if(!mp1[str])
            {
                mp1[str] = x;
                mp2[x] = str;
                lst.push_back(str);
                x++;
            }
        }
        int sz = lst.size();
        vector <int> words[sz+1];
        for(int i = 0; i<sz; i++)
        {
			int z1 = lst[i].size();
            for(int j = 0; j<sz && j!=i; j++)
            {
                int z2 = lst[j].size();
                if(z1==z2)
                {
                    int x, y;
                    x = mp1[lst[i]] , y = mp1[lst[j]];
                    words[x].push_back(y);
                    words[y].push_back(x);
                }
            }
        }
        getchar();
        string src, des, tmp;
        while(getline(cin,tmp))
        {
            if(tmp.size()<2)
                break;
            stringstream ss(tmp);
            ss>>src>>des;
            int srs = mp1[src];
            int trg = mp1[des];
            queue <int> q;
            int dis[sz+1];
            bool vis[sz+1];
            memset(dis,0,sizeof(dis)), memset(vis,0,sizeof(vis));
            q.push(srs);
            vis[srs] = 1;
            int u , v, countt = 0;
            bool flag = 0;
            while(!q.empty())
            {
                u = q.front();
                q.pop();
                if(flag)
                {
                    break;
                }
                string t1, t2, z;
                t1 = mp2[u];
                int ssz = words[u].size();
                for(int i = 0; i<ssz; i++)
                {
                    int x = words[u][i];
                    t2 = mp2[x];
                    if(!vis[x])
                    {
                        //int stor = checkdif(t1,t2);
                        int sss = t1.size(), c = 0;
                        for(int i = 0; i<sss; i++)
                        {
                            if(t1[i]!=t2[i])
                                c++;
                        }
                        int stor;
                        if(c==1)
                            stor = 1;
                        else if(c>1)
                            stor = 0;
                        else stor = 2;
                        if(stor)
                        {
                            if(stor==1)
                            {
                                vis[x] = 1;
                                dis[x] = dis[u] + 1;
                                q.push(x);
                            }
                            else
                            {
                                vis[x] = 1;
                                dis[x] = dis[u] + 1;
                                flag = true;
                                break;
                            }
                        }
                    }
                }
            }
            cout<<src<< " "<< des<< " "<<dis[trg]<<endl;
        }
    }
    return 0;
}
/*
int checkdif(string x, string y)
{
    int c = 0, sz = x.size();
    for(int i = 0; i<sz; i++)
    {
        if(x[i]!=y[i])
            c++;
    }
    if(c==1)
        return 1;
    else if(c>1)
        return 0;
    else if(!c)
        return 2;
}
*/
/**
Sample Input
1

dip
lip
mad
map
maple
may
pad
pip
pod
pop
sap
sip
slice
slick
spice
stick
stock
*
spice stock
may pod
Sample Output
spice stock 4
may pod 3
*/
