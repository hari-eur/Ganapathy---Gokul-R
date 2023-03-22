#include <stdio.h>

int main()
{
    int size;
    printf("Array Size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Elements: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int searchItem;
    printf("Search Item: ");
    scanf("%d", &searchItem);

    int i = 0;
    for (; i < size; i++)
    {
        if (arr[i] == searchItem)
        {
            printf("Found at index %d", i);
            break;
        }
    }

    if (i == size)
        printf("Element not found");

    printf("\n");
    return 0;
}