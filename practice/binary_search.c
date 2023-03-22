#include <stdio.h>

int main()
{
    int size;
    printf("Array Size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Elements(sorted): ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    int searchItem;
    printf("Search Item: ");
    scanf("%d", &searchItem);

    int low = 0, high = size - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == searchItem)
        {
            printf("Found at index %d", mid);
            break;
        }
        else if (arr[mid] < searchItem)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (low > high)
        printf("Element not found");

    printf("\n");
    return 0;
}