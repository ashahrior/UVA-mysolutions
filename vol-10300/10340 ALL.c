#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000000], s2[1000000];
    int i, j, len1, len2;
    while(scanf("%s %s", &s1, &s2)==2)
    {
        len1 = strlen(s1);
        len2 = strlen(s2);
        for(i=0, j=0; i<len1 && j<len2 ; j++)
        {
            if(s1[i]==s2[j])
            {
                i++;
            }
        }
        if(i==len1)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}

/*
Sample Input
sequence subsequence
person compression
VERDI vivaVittorioEmanueleReDiItalia
caseDoesMatter CaseDoesMatter

Sample Output
Yes
No
Yes
No
*/

