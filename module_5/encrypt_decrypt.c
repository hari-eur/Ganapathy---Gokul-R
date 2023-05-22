#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void encrypt(char *input, char *output)
{
    FILE *inputFile = fopen(input, "r");
    FILE *outputFile = fopen(output, "w");

    if (inputFile == NULL)
    {
        printf("file not exist");
        exit(-1);
    }

    char ch;
    while ((ch = fgetc(inputFile)) != EOF)
    {
        ch += 3;
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
}

void decrypt(char *input, char *output)
{
    FILE *inputFile = fopen(input, "r");
    FILE *outputFile = fopen(output, "w");

    if (inputFile == NULL)
    {
        printf("file not exist");
        exit(-1);
    }

    char ch;
    while ((ch = fgetc(inputFile)) != EOF)
    {
        ch -= 3;
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
}

int main()
{
    char option;
    do
    {
        system("clear");
        printf("E to encrypt\n");
        printf("D to decrypt\n");
        printf("Q to quit\n");
        scanf("%c", &option);

        if (option == 'Q' || option == 'q')
            break;

        if (option == 'E' || option == 'e')
        {
            char input[100];
            printf("Input file: ");
            scanf("%s", input);
            char output[100];
            printf("Output file: ");
            scanf("%s", output);
            encrypt(input, output);
        }
        else if (option == 'D' || option == 'd')
        {
            char input[100];
            printf("Input file: ");
            scanf("%s", input);
            char output[100];
            printf("Output file: ");
            scanf("%s", output);
            decrypt(input, output);
        }
    } while (option != 'Q');

    return 0;
}