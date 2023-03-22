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

    for (int i = 0; i < size; i++)
    {
        int smallest = i;

        for (int j = i + 1; j < size; j++)
            if (arr[smallest] > arr[j])
                smallest = j;

        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}