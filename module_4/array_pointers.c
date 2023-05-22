#include <stdio.h>
#define SIZE 10

int main()
{
    int arr[SIZE];
    printf("Array Size is %d\n", SIZE);
    printf("Enter the elements:\n");

    int *ptr = arr;
    for (int i = 0; i < SIZE; i++)
        scanf("%d", ptr + i);

    printf("Array Elements:\n");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", *(ptr + i));

    printf("\n");
    return 0;
}