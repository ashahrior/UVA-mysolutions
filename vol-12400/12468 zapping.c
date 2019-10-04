#include<stdio.h>
int main()
{
    int a, b, sub, press;
    while(scanf("%d%d",&a,&b)==2 &&(a>=0&&b>=0))
    {
        sub=(a-b);
        if(sub<0)
        {
            sub = sub * (-1);
        }
        if(sub>50)
        {
            press = 100-sub;
            printf("%d\n",press);
        }
        else
        {
            printf("%d\n",sub);
        }
    }
    return 0;
}
