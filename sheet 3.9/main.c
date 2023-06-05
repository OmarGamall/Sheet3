/*Write a C function that return the count of the longest consecutive
occurrence of any number ,and return the number
Array={1,2,2,3,3,3,3,4,4,4,4,4,3,3,3} result -> 5 ,number -> 4*/

#include <stdio.h>

/*O(n2)*/
void count_longest_consecutive_V1(int arr[], int size, int *max_count, int *number)
{
    *max_count = 0;
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; i < size; i++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                // the longest consecutive occurrence of a number is ended
                if (count > *max_count)
                {
                    *max_count = count;
                    *number = arr[i - 1];
                }
                count = 1;
                break;
            }
        }
        // Check if the last streak of consecutive elements is the longest
        if (count > *max_count)
        {
            *max_count = count;
            *number = arr[i - 1];
        }
    }
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count, number;

    count_longest_consecutive_V1(arr, size, &count, &number);

    printf("The longest consecutive occurrence of any number in the array is: %d\n", count);
    printf("The number that appears the most is: %d\n", number);

    return 0;
}