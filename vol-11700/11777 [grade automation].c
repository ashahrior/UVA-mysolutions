#include<stdio.h>
int main()
{
    int i, t1, t2, f, a, ct1, ct2, ct3, avrg, grade, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d%d%d%d%d%d", &t1, &t2, &f, &a, &ct1, &ct2, &ct3);
        if(ct1<=ct2 && ct1<=ct3)
            avrg = (ct2+ct3)/2;
        else if(ct2<=ct1 && ct2<=ct3)
            avrg = (ct1+ct3)/2;
        else if(ct3<=ct1 && ct3<=ct2)
            avrg = (ct1+ct2)/2;
        grade = t1 + t2 + f + a + avrg;
        if(grade>=90)
        {
            printf("Case %d: A\n", i);
        }
        else if(grade>=80 && grade<90)
        {
            printf("Case %d: B\n", i);
        }
        else if(grade>=70 && grade<80)
        {
            printf("Case %d: C\n", i);
        }
        else if(grade>=60 && grade<70)
        {
            printf("Case %d: D\n", i);
        }
        else if(grade<60)
        {
            printf("Case %d: F\n", i);
        }
    }
    return 0;
}
