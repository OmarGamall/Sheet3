/*Write a c function that removes the repeated number of an input
sorted array and return a new array without the repeated numbers*/
#include <stdlib.h>
#include <stdio.h>
int *removeDuplicates(int arr[], int size, int *newSize)
{
    int i = 0;
    int filling_i = 0;
    for (i = 0; i < size; i++)
    {
        // check repeated number
        if ((i == 0) || (arr[i] != arr[i - 1]))
        {
            // not repeated
            arr[filling_i++] = arr[i];
        }
        else
        {
            // Do nothing
        }
    }
    *newSize = filling_i;
    int *new_arr = (int *)malloc((*newSize) * sizeof(int));
   
    // fill new array
    for (int k = 0; k < (*newSize); k++)
    {
        new_arr[k] = arr[k];
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
    int arr[] = {1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 5, 5, 6,6, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize;
    print_array(arr, size);
    int *arr2 = removeDuplicates(arr, size, &newSize);
    printf("\nthe new size = %d\n",newSize);
    print_array(arr2, newSize);
    return 0;
}