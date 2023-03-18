#include <stdio.h>
#include <string.h>

int isAlpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int isNum(char c)
{
    return c >= '0' && c <= '9';
}

void *sort(char *string)
{
    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (string[i] > string[j])
            {
                char temp = *(string + i);
                *(string + i) = *(string + j);
                *(string + j) = temp;
            }
        }
    }
}

void special_sort(char *string, char *sorted)
{
    char part[100];
    int i = 0, j = 0;
    while (*string != '\0')
    {
        if (
            (isAlpha(*(string - 1)) && !isAlpha(*string)) ||
            (isNum(*(string - 1)) && !isNum(*string)))
        {
            part[i] = '\0';
            i = 0;
            sort(part);
            strcat(sorted, part);
        }

        part[i] = *string;
        i++;
        string++;
    }

    part[i] = '\0';
    sort(part);
    strcat(sorted, part);
}

int main()
{
    char string[100];
    printf("String: ");
    scanf("%s", string);

    char sorted[100];
    special_sort(string, sorted);
    printf("Output: %s\n", sorted);

    return 0;
}