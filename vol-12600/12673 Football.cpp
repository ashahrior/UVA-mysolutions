#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n, g, point, i, r, a, b;
    vector <int> v;
    while(cin>>n>>g)
    {
        v.clear();
        point=0;
        for(i=0; i<n; i++)
        {
            cin>>a>>b;
            r = a-b;
            v.push_back(r);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(i=0; i<n; i++)
        {
            if(v[i]>0)
            {
                point+=3;
                continue;
            }
            else if(v[i]==0 && g>0)
            {
                point+=3;
                g--;
                continue;
            }
            else if(v[i]==0 && g<=0)
            {
                point++;
                continue;
            }
            else if(v[i]<0 && g>0)
            {
                if( (g+v[i])==0 )
                {
                    point++;
                    g=0;
                    break;
                }
                else if( (g+v[i])>0 )
                {
                    point+=3;
                    g = g+v[i]-1;
                    continue;
                }
                else if( (g+v[i])<0 )
                    break;
            }
            else if(v[i]<0 && g<=0)
                break;
        }
        cout<<point<<endl;
    }
    return 0;
}
