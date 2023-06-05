/*Write c function to take an array and return the biggest difference
between 2 numbers in the array (the smaller number must come first in the
array) {10,1,5,3,6,8,7,2}->return 7 difference between 1,8.
*/
#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)
#include <stdio.h>

/*O(n)*/
int Get_Max_diff(int arr[], int size)
{
    int min_element = arr[0];
    int max_diff = arr[1] - min_element;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] - min_element > max_diff)
        {
            max_diff = arr[i] - min_element;
        }
        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }
    }
    return max_diff;
}

int main()
{
    int arr[] = {10, 1, 5, 3, 6, 8, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int arr2[] = {8, 1, 5, 0, 6, 8, 10, 2};
    int size2 = sizeof(arr) / sizeof(arr[0]);
    int diff = Get_Max_diff(arr, size);
    int diff2 = Get_Max_diff(arr2, size2);
    printf("%d\n", diff);
    printf("%d", diff2);
}

