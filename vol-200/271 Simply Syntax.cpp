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
   int x, i, l;
   string str;
   while(cin>>str)
   {
       l = str.size();
       x=0;
       for(i=l-1; i>=0; i--)
       {
           if(str[i]>='p' && str[i]<='z')
            x++;
           else if(str[i]=='C' || str[i]=='D' || str[i]=='E' || str[i]=='I')
           {
               if(x<2)
               {
                   x = 0;
                   break;
               }
               else x--;
           }
           else if(str[i]=='N')
           {
               if(x<1)
               {
                   x = 0;
                   break;
               }
           }
       }
       if(x==1)
        cout<< "YES"<<endl;
       else cout<< "NO" <<endl;
   }
   return 0;
}


/**
Sample Input

Cp
Isz
NIsz
Cqpq

Sample Output

NO
YES
YES
NO
*/
