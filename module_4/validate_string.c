#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING_LENGTH 10000

int isUpper(char c)
{
    return c >= 'A' && c <= 'Z';
}

int isLower(char c)
{
    return c >= 'a' && c <= 'z';
}

int isNum(char c)
{
    return c >= '1' && c <= '9';
}

int isSpecialChar(char c)
{
    return !isUpper(c) && !isLower(c) && !isNum(c) && c != ' ';
}

int main()
{
    char *string = (char *)malloc(sizeof(char) * MAX_STRING_LENGTH);

    printf("Text: ");
    scanf("%[^\n]s", string);

    int len = strlen(string);
    string = realloc(string, sizeof(char) * len);

    if (len < 8)
    {
        printf("Invalid String");
        exit(-1);
    }

    int upperVal = 0, lowerVal = 0, numVal = 0, specialVal = 0;
    for (int i = 0; i < len; i++)
    {
        if (isUpper(*(string + i)))
            upperVal = 1;
        else if (isLower(*(string + i)))
            lowerVal = 1;
        else if (isNum(*(string + i)))
            numVal = 1;
        else if (isSpecialChar(*(string + i)))
            specialVal = 1;

        if (upperVal && lowerVal && numVal && specialVal)
            break;
    }

    if (upperVal && lowerVal && numVal && specialVal)
        printf("Valid String\n");
    else
        printf("Invalid String\n");

    return 0;
}