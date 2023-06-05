/*Write c function to take 2 arrays and return an array by merging
them like this arr1={1,2,3,4,5},arr2={11,12,13,14,15} return
arr3={1,11,2,12,3,13,4,14,5,15} )*/
#include <stdlib.h>
#include <stdio.h>
/*function used to merge two arrays of same size*/
int *array_merge_V1(int arr1[], int arr2[], int size)
{
    int i = 0;
    int c1 = 0, c2 = 0;
    int *new_arr = (int *)malloc(size * 2 * sizeof(int));
    while (i < size * 2)
    {
        new_arr[i++] = arr1[c1++];
        new_arr[i++] = arr2[c2++];
    }
    return new_arr;
}

/*function used to merge two arrays of different size*/
int *array_merge_V2(int arr1[], int size1, int arr2[], int size2)
{
    int new_size = size1 + size2;
    int i = 0;
    int c1 = 0, c2 = 0;
    int *new_arr = (int *)malloc(new_size * sizeof(int));
    // loop to the size of the smaller array
    while ((c1 < size1) && (c2 < size2))
    {
        new_arr[i++] = arr1[c1++];
        new_arr[i++] = arr2[c2++];
    }
    // add remaining elements from arr1
    while (c1 < size1)
    {
        new_arr[i++] = arr1[c1++];
    }
    // add remaining elements from arr2
    while (c2 < size2)
    {
        new_arr[i++] = arr2[c2++];
    }
    return new_arr;
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
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[] = {11, 12, 13, 14, 15};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int *arr3 = array_merge_V2(arr1, size1, arr2, size2);
    print_array(arr3, size1 + size2);
    return 0;
}