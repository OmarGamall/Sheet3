/*Write a C function to return the index of LAST occurrence of a number in a
given array. Array index start from 0. If the item is not in the list return -1*/
#include <stdio.h>
int Last_occurrance(int arr[], int size, int num)
{
    for (int i = size-1; i >= 0; i--)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    // test function
    int arr[] = {1, 77, 2, 2, 4, 3, 2, 8, 2, 5, 4, 2, 7, 2, 7, 78, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int ret = Last_occurrance(arr, size, 78);
    printf("%d", ret);
}