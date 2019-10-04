#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, length;
    char input[1000];
    char output[1000];
    char x[1000];
    char letter[50] = {'`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '=', 'Q',
                       'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '[', ']', '\\', 'A', 'S',
                       'D', 'F', 'G', 'H', 'J', 'K', 'L', ';', '\'', 'Z', 'X', 'C', 'V', 'B',
                       'N', 'M', ',', '.', '/', '\0'
                      };
    while(gets(input))
    {
        length = strlen(input);
        for(i=0; i<length; i++)
        {
            if(input[i]== ' ' || input[i] == '`' || input[i] == 'Q' || input[i] == 'A' || input[i] == 'Z')
            {
                output[i] = input[i];
            }
            else
            {
                for(j=0; j<50; j++)
                {
                    if(input[i] == letter[j])
                    {
                        x[i] = letter[j-1];
                    }
                }
                output[i] = x[i];
            }
        }
        output[i] = '\0';
        for(i=0; i<length; i++)
        {
            printf("%c", output[i]);
        }
        printf("\n");
    }
    return 0;
}
