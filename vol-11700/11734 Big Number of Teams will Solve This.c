#include<stdio.h>
#include<string.h>
int main()
{
    int i1, c, len1, len2, i, j, error;
    char team[30], judge[30], team1[30];
    scanf("%d", &c);
    getchar();
    for(i1 = 1; i1<=c; i1++)
    {
        gets(team);
        gets(judge);
        printf("Case %d: ",i1);
        len1 = strlen(team);
        len2 = strlen(judge);
        if((strcmp(team,judge))==0)
            printf("Yes\n");
        else
        {
            error = 0;
            j=0;
            for(i= 0; i<len1; i++)
            {
                if((team[i]>='a' && team[i]<='z') || (team[i]>='A' && team[j]<= 'Z'))
                {
                    team1[j] = team[i];
                    j++;
                }
            }
            team1[j]='\0';
            for(i=0; i<len2; i++)
            {
                if(judge[i]!=team1[i])
                {
                    error++;
                    break;
                }
            }
            if(len2 == j && error==0)
                printf("Output Format Error\n");
            else
                printf("Wrong Answer\n");
        }
    }
    return 0;
}

