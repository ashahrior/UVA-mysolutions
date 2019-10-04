#include<stdio.h>
int main()
{
    int i, k, divx, divy, px, py, x, y;
    while(scanf("%d",&k)==1 && k!=0)
    {
        scanf("%d%d",&divx, &divy);
        for(i=1; i<=k; i++)
        {
            scanf("%d%d", &px,&py);
            x = px - divx;
            y = py - divy;
            if(x==0 || y==0)
            {
                printf("divisa\n");
            }
            else if(x>0 && y>0)
            {
                printf("NE\n");
            }
            else if(x<0 && y>0)
            {
                printf("NO\n");
            }
            else if(x<0 && y<0)
            {
                printf("SO\n");
            }
            else if(x>0 && y<0)
            {
                printf("SE\n");
            }
        }
    }
    return 0;
}
