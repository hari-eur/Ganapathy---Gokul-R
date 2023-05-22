#include <stdio.h>

int main()
{

    char *string = "string";
    *string = '!';

    printf("%s\n", string);
    return 0;
}