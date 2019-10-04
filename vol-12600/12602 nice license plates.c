#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    int i, l, d, c, n;
    scanf("%d",&c);
     getchar();
    for(i=1; i<=c; i++)
    {
        gets(str);
        l = (str[0]-65)*26*26 + (str[1]-65)*26 + (str[2]-65)*1;
        d= (str[4]-48)*1000 + (str[5]-48)*100 + (str[6]-48)*10 + (str[7]-48);
        if(l>d)
            n=l-d;
        else
            n=d-l;
        if(n<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
