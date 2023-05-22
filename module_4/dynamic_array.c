#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter Array Size: ");
    scanf("%d", &size);

    printf("Enter Elements:\n");
    int *arr = (int *)malloc(sizeof(int) * size);
    for (int i = 0; i < size; i++)
        scanf("%d", arr + i);

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);

    printf("Sum: %d\n", sum);
    free(arr);

    return 0;
}