#include <stdio.h>
#include <stdlib.h>

/*Write a C function to take an array and reverse its elements.*/

void array_reverse(int arr[], int size)
{
    int temp = 0;
    int j = size - 1;
    for (int i = 0; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_array(arr,size);
    printf("\n");
    array_reverse(arr,size);
    print_array(arr,size);
    return 0;
}