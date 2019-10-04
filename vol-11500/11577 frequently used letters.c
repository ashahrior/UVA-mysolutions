#include<stdio.h>
#include<string.h>
int main()
{
    char c[210];
    int i1, j1, k1, m, test;
    scanf("%d", &test);
    getchar();
    for(i1=1; i1<=test; i1++)
    {
        gets(c);
        int x[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        j1=0;
        while(c[j1]!='\0')
        {
            if(c[j1]>='a' && c[j1]<= 'z')
                x[c[j1]-97]++;
            else if(c[j1]>='A' && c[j1]<= 'Z')
                x[c[j1]-65]++;
            j1++;
        }
        m=0;
        for(k1=0; k1<26; k1++)
        {
            if(x[k1]>m)
                m = x[k1];
        }
        for(k1=0; k1<26; k1++)
        {
            if(x[k1]==m)
                printf("%c", k1+97);
        }
        printf("\n");
    }
    return 0;
}
