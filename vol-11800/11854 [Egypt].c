#include<stdio.h>
int main()
{
    int p, q, i, j, a, ara[3];
    while(1)
    {
        for(i=0; i<3; i++)
        {
            scanf("%d", &ara[i]);
        }
        if(ara[0] == 0 && ara[1] == 0 && ara[2] == 0)
        {
            break;
        }
        else
        {
        for (i = 0; i < 3; ++i)
        {
            for (j = i + 1; j < 3; ++j)
            {
                if (ara[i] > ara[j])
                {
                    a = ara[i];
                    ara[i] = ara[j];
                    ara[j] = a;
                }
            }
        }
        p = ((ara[0] * ara[0]) + (ara[1] * ara[1]));
        q = (ara[2]*ara[2]);
        if(p==q)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }
        }
    }
    return 0;
}
