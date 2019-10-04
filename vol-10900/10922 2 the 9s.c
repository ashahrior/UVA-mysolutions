#include<stdio.h>
#include<string.h>
int main()
{
    char num[1002];
    int i, sum, len, q, d, degree;
    while(gets(num))
    {
        degree=0;
        sum=0;
        len = strlen(num);
        if(len==1 && num[0]=='0')
            break;
        for(i=0; i<len; i++)
        {
            sum+= num[i] - 48;
        }
        if(sum%9!=0)
            printf("%s is not a multiple of 9.\n", num);
        else
        {
             degree=1, d=sum;
            while(d!=9 && d>9)
            {
                q=0;
                while(d!=0)
                {
                    q+=d%10;
                    d=d/10;
                }
                d=q;
                degree++;
            }
            printf("%s is a multiple of 9 and has 9-degree %d.\n", num, degree);
        }
    }
    return 0;
}
