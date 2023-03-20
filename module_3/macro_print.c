#include <stdio.h>
#define print(format, ...) printf(format, __VA_ARGS__)

int main()
{
    char data[] = "EmbedUR";
    char data_1[] = "Ganapathy";
    char data_2[] = "EmbedUR solutions";
    print("Welcome to %s\n", data);
    print("Hello to %s: Welcome to %s\n", data_1, data_2);
}