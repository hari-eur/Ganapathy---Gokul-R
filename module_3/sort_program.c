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

// sort string in ascending order
void sort(char *string)
{
    int len = strlen(string);
    for (int i = 0; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (string[i] > string[j])
            {
                // swapping
                char temp = *(string + i);
                *(string + i) = *(string + j);
                *(string + j) = temp;
            }
        }
    }
}

// split by type of char and sort individually
void special_sort(char *string, char *sorted)
{
    // saves the part of the string
    char part[100];
    int i = 0, j = 0;
    while (*string != '\0')
    {
        if (
            (isAlpha(*(string - 1)) && !isAlpha(*string)) ||
            (isNum(*(string - 1)) && !isNum(*string)))
        {
            // new part start from current iteration
            part[i] = '\0';
            i = 0;
            sort(part);
            strcat(sorted, part);
        }

        part[i] = *string;
        i++;
        string++;
    }

    // for the last part
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