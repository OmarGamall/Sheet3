/*Write c function to find the most repeated number in an array of integers*/

#include <assert.h>
#include <stdio.h>
/*O(n^2)*/
int Most_repeated(int arr[], int size)
{
    int counter = 0;
    int max_counter = 0;
    int element = 0;
    for (int i = 0; i < size; i++)
    {
        counter=1;  //set the counter back  (never forget!!!)
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                counter++;
            }
        }
        if (counter > max_counter)
        {
            max_counter = counter;
            element = arr[i];
        }
    }
    return element;
}


void test_Most_repeated()
{
    // Test case 1: One element repeated multiple times
    int arr1[] = {1, 1, 1, 1, 1};
    int size1 = 5;
    int result1 = Most_repeated(arr1, size1);
    assert(result1 == 1);

    // Test case 2: Multiple elements repeated same number of times
    int arr2[] = {1, 2, 3, 1, 2, 3, 1, 2, 3};
    int size2 = 9;
    int result2 = Most_repeated(arr2, size2);
    assert(result2 == 1);

    // Test case 3: No elements repeated
    int arr3[] = {1, 2, 3, 4, 5};
    int size3 = 5;
    int result3 = Most_repeated(arr3, size3);
    assert(result3 == 1);

    // Test case 4: All elements distinct
    int arr4[] = {5, 4, 3, 2, 1};
    int size4 = 5;
    int result4 = Most_repeated(arr4, size4);
    assert(result4 == 5);

    // Test case 5: Multiple elements with maximum repetitions
    int arr5[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int size5 = 10;
    int result5 = Most_repeated(arr5, size5);
    assert(result5 == 4);
}

int main()
{
    test_Most_repeated();
    printf("All tests passed");
    return 0;
}