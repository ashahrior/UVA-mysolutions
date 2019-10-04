#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    char str2[1000];
    int i, j, k, len1, len2, fin;
    while(gets(str1))
    {
        fin=0;
        len1 = strlen(str1);
        j=-1;
        if(len1==4 && str1[0]=='D' && str1[1]=='O' && str1[2]=='N' && str1[3]=='E')
        {
            break;
        }
        for(i=0;i<len1;i++)
        {
            if(str1[i]!= '.' && str1[i]!= ',' && str1[i]!= '!' && str1[i]!= '?' && str1[i]!= ' ')
            {
                j++;
                str2[j] = str1[i];
            }
        }
        for(i=0 ; i<=j; i++)
        {
            if(str2[i]!=str2[j-i] && str2[i]!=(str2[j-i]-32) && str2[i]!=(str2[j-i]+32))
            {
                fin=1;
                printf("Uh oh..\n");
                break;
            }
        }
        if(fin==0)
        {
            printf("You won't be eaten!\n");
        }
    }
    return 0;
}

/*
A-Z, a-z, ‘.’, ‘,’, ‘!’, ‘?', ' '


#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000];
    char str2[1000];
    int i, j, k, len1, len2, fin;
    while(gets(str1))
    {
        fin=0;
        len1 = strlen(str1);
        j=-1;
        if(len1==4 && str1[0]=='D' && str1[1]=='O' && str1[2]=='N' && str1[3]=='E')
        {
            break;
        }
        for(i=0;i<len1;i++)
        {
            if(str1[i]!= '.' && str1[i]!= ',' && str1[i]!= '!' && str1[i]!= '?' && str1[i]!= ' ')
            {
                j++;
                str2[j] = str1[i];
            }
        }
        len2 = strlen(str2);
        for(i=0 ,j=len2-1 ; j>=len2/2; i++, j--)
        {
            if(str2[i]!=str2[j] && str2[i]!=(str2[j]-32) && str2[i]!=(str2[j]+32))
            {
                fin=1;
                printf("Uh oh..\n");
                break;
            }
        }
        if(fin==0)
        {
            printf("You won't be eaten!\n");
        }
    }
    return 0;

*/
