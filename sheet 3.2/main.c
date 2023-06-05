/*Write a C function to return the maximum and minimum number in an
array and their indexes.*/
#include <stdio.h>

void Find_Min_Max_Element(int arr[], int size, int *min, int *minidx, int *max, int *maxidx)
{
    //First check data validation
    if (size == 0 || arr == NULL)
    {
        // Empty array
        return;
    }
    *max = arr[0];
    *min = arr[0];
    *maxidx = 0;
    *minidx = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > (*max))
        {
            *max = arr[i];
            *maxidx = i;
        }
        if (arr[i] < (*min))
        {
            *min = arr[i];
            *minidx = i;
        }
    }
}

#include <assert.h>

int main()
{
    // Test case 1: Array with positive and negative integers
    int arr1[] = {3, -1, 5, 2, -4};
    int size1 = 5;
    int min1, minidx1, max1, maxidx1;
    Find_Min_Max_Element(arr1, size1, &min1, &minidx1, &max1, &maxidx1);
    assert(min1 == -4);
    assert(minidx1 == 4);
    assert(max1 == 5);
    assert(maxidx1 == 2);

    // Test case 2: Array with all equal elements
    int arr2[] = {7, 7, 7, 7, 7};
    int size2 = 5;
    int min2, minidx2, max2, maxidx2;
    Find_Min_Max_Element(arr2, size2, &min2, &minidx2, &max2, &maxidx2);
    assert(min2 == 7);
    assert(minidx2 == 0);
    assert(max2 == 7);
    assert(maxidx2 == 0);

    // Test case 3: Empty array
    int* arr3 = NULL;
    int size3 = 0;
    int min3, minidx3, max3, maxidx3;
    Find_Min_Max_Element(arr3, size3, &min3, &minidx3, &max3, &maxidx3);
    // There is no minimum or maximum element in an empty array, so we expect the output to be undefined.
    // We don't test for any specific values here.

    // Test case 4: Array with only negative integers
    int arr4[] = {-2, -7, -1, -5, -4};
    int size4 = 5;
    int min4, minidx4, max4, maxidx4;
    Find_Min_Max_Element(arr4, size4, &min4, &minidx4, &max4, &maxidx4);
    assert(min4 == -7);
    assert(minidx4 == 1);
    assert(max4 == -1);
    assert(maxidx4 == 2);

    // Test case 5: Array with only positive integers
    int arr5[] = {9, 2, 6, 3, 4};
    int size5 = 5;
    int min5, minidx5, max5, maxidx5;
    Find_Min_Max_Element(arr5, size5, &min5, &minidx5, &max5, &maxidx5);
    assert(min5 == 2);
    assert(minidx5 == 1);
    assert(max5 == 9);
    assert(maxidx5 == 0);

    printf("All Test Case passed");

    return 0;
}