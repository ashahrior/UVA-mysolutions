#include<stdio.h>
#include<string.h>
int main()
{
    char real[30], fake[30];
    int t, r, f, i, j;
    scanf("%d", &t);
    getchar();
    while(t--)
    {
        gets(real);
        gets(fake);
        r = strlen(real);
        f = strlen(fake);
        if(r!=f)
            printf("No\n");
        else
        {
            if((strcmp(real,fake))==0)
                printf("Yes\n");
            else
            {
                j=0;
                for(i=0; i<r; i++)
                {
                    if((real[i]!=fake[i]) && (real[i]=='a' || real[i]=='e' || real[i]=='i' || real[i]=='o'
                                              || real[i]=='u') && (fake[i]=='a' || fake[i]=='e' || fake[i]=='i' ||
                                                      fake[i]=='o' || fake[i]=='u'))
                    {
                        continue;
                    }
                    else if(real[i]!=fake[i])
                    {
                        j++;
                        break;
                    }
                }
                if(j==0)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
        }
    }
    return 0;
}
