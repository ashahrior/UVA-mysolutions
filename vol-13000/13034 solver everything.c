#include<stdio.h>
int main()
{
    int team[20];
    int s, i, n, no;
    scanf("%d", &s);
    for(n=1; n<=s; n++)
    {
        no=0;
        for(i=0; i<13; i++)
        {
            scanf("%d", &team[i]);
        }
        for(i=0; i<13; i++)
        {
            if(team[i]==0)
            {
                printf("Set #%d: No\n",n);
                no++;
                break;
            }
        }
        if(no==0)
            printf("Set #%d: Yes\n",n);
    }
    return 0;
}
