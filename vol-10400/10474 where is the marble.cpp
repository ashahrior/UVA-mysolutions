#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int nz[10000], qz[10000];
    int n, q, i, j, spin=0, k, flag, l;
    while(scanf("%d%d",&n,&q)==2 &&(n!=0&&q!=0))
    {
        spin++;
        for(i=0; i<n; i++)
        {
            scanf("%d",&nz[i]);
        }
        sort(nz,nz+i);
        for(j=0; j<q; j++)
        {
            scanf("%d",&qz[j]);
        }
        printf("CASE# %d:\n",spin);
        for(k=0; k<q; k++)
        {
            flag=0;
            for(l=0; l<n; l++)
            {
                if(qz[k]==nz[l])
                {
                    flag++;
                }
                if(flag==0 && l==n-1)
                {
                    printf("%d not found\n",qz[k]);
                    break;
                }
                if(flag!=0)
                {
                    printf("%d found at %d\n", qz[k],l+1);
                    break;
                }
            }
        }
    }
    return 0;
}
