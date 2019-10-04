#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    int i, j, d, len1, len2, sum1, sum2, sumz1, sumz2;
    float a, b, result;
    while(gets(str1))
    {
        gets(str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        sum1 = 0, sum2 = 0;
        for(i=0; i<len1; i++)
        {
            if(str1[i]>='a'&&str1[i]<='z')
            {
                sum1 = sum1 + str1[i] - 96;
            }
            else if(str1[i]>='A'&&str1[i]<='Z')
            {
                sum1 = sum1 + str1[i] - 64;
            }
        }
        for(j=0; j<len2; j++)
        {
            if(str2[j]>='a'&&str2[j]<='z')
            {
                sum2 = sum2 + str2[j] - 96;
            }
            else if(str2[j]>='A'&&str2[j]<='Z')
            {
                sum2 = sum2 + str2[j] - 64;
            }
        }

        sumz1=0, sumz2=0;
        while(sum1!=0)
        {
            d=sum1%10;
            sumz1+=d;
            sum1 = sum1 / 10;
        }
        if(sumz1>9)
        {
            sum1=sumz1;
            sumz1=0;
            while(sum1!=0)
            {
                d=sum1%10;
                sumz1+=d;
                sum1 = sum1/10;
            }
        }

        while(sum2!=0)
        {
            d=sum2%10;
            sumz2+=d;
            sum2 = sum2 / 10;
        }
        if(sumz2>9)
        {
            sum2=sumz2;
            sumz2=0;
            while(sum2!=0)
            {
                d=sum2%10;
                sumz2+=d;
                sum2 = sum2/10;
            }
        }

        if(sumz2<sumz1)
        {
            a=sumz2;
            b=sumz1;
        }
        else
        {
            a=sumz1;
            b=sumz2;
        }
        result = ((float)a*100)/(float)b;
        printf("%.2lf %c\n", result,37);
    }
    return 0;
}
