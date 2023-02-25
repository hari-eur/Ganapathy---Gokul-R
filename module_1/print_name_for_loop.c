#include <stdio.h>

int main()
{
    char name[] = "ganapathy";

    for (int i = 0; name[i] != '\0'; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    return 0;
}
