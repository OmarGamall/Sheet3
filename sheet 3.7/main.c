/*Write a C function to take 2 arrays and swap them (try with 2 different sizes).
 */

#include <stdio.h>

void swap_arrays(int arr1[], int size1, int arr2[], int size2)
{
    int temp = 0;
    int i = 0;
    // Swap the elements of the arrays up to the size of the smaller array
    for (i = 0; ((i < size1) && (i < size2)); i++)
    {
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    // handle different sizes
    //  If one array is larger, copy the remaining elements to the other array (segmentation faulr)
    if (size1 > size2)
    {
        for (i = size2; i < size1; i++)
        {
            arr2[i] = arr1[i];
        }
    }
    else if (size2 > size1)
    {
        for (i = size1; i < size2; i++)
        {
            arr1[i] = arr2[i];
        }
    }
}

void print_array(int arr[], int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            printf("%d", arr[i]);
        else
            printf("%d ,", arr[i]);
    }
    printf("]");
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Before Swap:\n");
    printf("arr1=");
    print_array(arr1, size1);
    printf("\n");
    printf("arr2=");
    print_array(arr2, size2);
    swap_arrays(arr1, size1, arr2, size2);
    printf("\nAfter Swap:\n");
    printf("arr1=");
    print_array(arr1, size1);
    printf("\n");
    printf("arr2=");
    print_array(arr2, size2);
    return 0;
}