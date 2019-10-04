#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char w[100];
    int i=0;
    while (scanf("%s", &w) != EOF)
    {
        i++;
        if (strcmp(w, "#") == 0)
        {
            break;
        }
        else if (strcmp(w, "HOLA") == 0)
        {
            printf("Case %d: SPANISH\n", i);
        }
        else if (strcmp(w, "HELLO") == 0)
        {
            printf("Case %d: ENGLISH\n", i);
        }
        else if (strcmp(w, "HALLO") == 0)
        {
            printf("Case %d: GERMAN\n", i);
        }
        else if (strcmp(w, "BONJOUR") == 0)
        {
            printf("Case %d: FRENCH\n", i);
        }
        else if (strcmp(w, "CIAO") == 0)
        {
            printf("Case %d: ITALIAN\n", i);
        }
        else if (strcmp(w, "ZDRAVSTVUJTE") == 0)
        {
            printf("Case %d: RUSSIAN\n", i);
        }
        else
        {
            printf("Case %d: UNKNOWN\n", i);
        }
    }
    return 0;
}
