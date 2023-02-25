#include <stdio.h>

int main()
{
    char name[] = "ganapathy";
    int i = 0, j = 0;

    while (name[i] != '\0')
    {
        j = 0;
        while (j <= i)
            printf("%c", name[j++]);

        printf("\n");
        i++;
    }

    return 0;
}
