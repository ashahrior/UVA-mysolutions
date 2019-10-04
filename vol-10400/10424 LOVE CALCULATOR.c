#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    char str2[30];
    int d, i, j, len1, len2, sum1, sum2, sumz1, sumz2;

    int a1=1, b1=2, c1=3, d1=4, e1=5, f1=6, g1=7, h1=8, i1=9, j1=10, k1=11, l1=12,
        m1=13, n1=14, o1=15, p1=16, q1=17, r1=18, s1=19, t1=20, u1=21, v1=22, w1=23,
        x1=24, y1=25, z1=26;

    int a2=1, b2=2, c2=3, d2=4, e2=5, f2=6, g2=7, h2=8, i2=9, j2=10, k2=11, l2=12,
        m2=13, n2=14, o2=15, p2=16, q2=17, r2=18, s2=19, t2=20, u2=21, v2=22, w2=23,
        x2=24, y2=25, z2=26;

    float a, b, result;

    while(gets(str1))
    {
        gets(str2);

        len1=strlen(str1);
        len2=strlen(str2);

        sum1=0, sum2=0;

        for(i=0; i<len1; i++)
        {
            switch(str1[i])
            {
            case 'a':
            case 'A':
                sum1+=a1;
                break;
            case 'b':
            case 'B':
                sum1+=b1;
                break;
            case 'c':
            case 'C':
                sum1+=c1;
                break;
            case 'd':
            case 'D':
                sum1+=d1;
                break;
            case 'e':
            case 'E':
                sum1+=e1;
                break;
            case 'f':
            case 'F':
                sum1+=f1;
                break;
            case 'g':
            case 'G':
                sum1+=g1;
                break;
            case 'h':
            case 'H':
                sum1+=h1;
                break;
            case 'i':
            case 'I':
                sum1+=i1;
                break;
            case 'j':
            case 'J':
                sum1+=j1;
                break;
            case 'k':
            case 'K':
                sum1+=k1;
                break;
            case 'l':
            case 'L':
                sum1+=l1;
                break;
            case 'm':
            case 'M':
                sum1+=m1;
                break;
            case 'n':
            case 'N':
                sum1+=n1;
                break;
            case 'o':
            case 'O':
                sum1+=o1;
                break;
            case 'p':
            case 'P':
                sum1+=p1;
                break;
            case 'q':
            case 'Q':
                sum1+=q1;
                break;
            case 'r':
            case 'R':
                sum1+=r1;
                break;
            case 's':
            case 'S':
                sum1+=s1;
                break;
            case 't':
            case 'T':
                sum1+=t1;
                break;
            case 'u':
            case 'U':
                sum1+=u1;
                break;
            case 'v':
            case 'V':
                sum1+=v1;
                break;
            case 'w':
            case 'W':
                sum1+=w1;
                break;
            case 'x':
            case 'X':
                sum1+=x1;
                break;
            case 'y':
            case 'Y':
                sum1+=y1;
                break;
            case 'z':
            case 'Z':
                sum1+=z1;
                break;
            }
        }

        for(j=0; j<len2; j++)
        {
            switch(str2[j])
            {
            case 'a':
            case 'A':
                sum2+=a2;
                break;
            case 'b':
            case 'B':
                sum2+=b2;
                break;
            case 'c':
            case 'C':
                sum2+=c2;
                break;
            case 'd':
            case 'D':
                sum2+=d2;
                break;
            case 'e':
            case 'E':
                sum2+=e2;
                break;
            case 'f':
            case 'F':
                sum2+=f2;
                break;
            case 'g':
            case 'G':
                sum2+=g2;
                break;
            case 'h':
            case 'H':
                sum2+=h2;
                break;
            case 'i':
            case 'I':
                sum2+=i2;
                break;
            case 'j':
            case 'J':
                sum2+=j2;
                break;
            case 'k':
            case 'K':
                sum2+=k2;
                break;
            case 'l':
            case 'L':
                sum2+=l2;
                break;
            case 'm':
            case 'M':
                sum2+=m2;
                break;
            case 'n':
            case 'N':
                sum2+=n2;
                break;
            case 'o':
            case 'O':
                sum2+=o2;
                break;
            case 'p':
            case 'P':
                sum2+=p2;
                break;
            case 'q':
            case 'Q':
                sum2+=q2;
                break;
            case 'r':
            case 'R':
                sum2+=r2;
                break;
            case 's':
            case 'S':
                sum2+=s2;
                break;
            case 't':
            case 'T':
                sum2+=t2;
                break;
            case 'u':
            case 'U':
                sum2+=u2;
                break;
            case 'v':
            case 'V':
                sum2+=v2;
                break;
            case 'w':
            case 'W':
                sum2+=w2;
                break;
            case 'x':
            case 'X':
                sum2+=x2;
                break;
            case 'y':
            case 'Y':
                sum2+=y2;
                break;
            case 'z':
            case 'Z':
                sum2+=z2;
                break;
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
