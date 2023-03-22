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

    for (int i = 1; i < size; i++)
    {
        int j = i;

        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;

            j -= 1;
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}