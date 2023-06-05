/*Write a C function that return the count of the longest consecutive 
occurrence of a given number in an array. 
Array= {1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 -> result = 4*/
#include<stdio.h>
int count_longest_consecutive(int arr[], int size, int target) 
{
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
        else
        {
            //the longest consecutive occurrence of a number is ended
            if (count > max_count) 
            {
                max_count = count;
            }
            count=0;
        } 
    }
    
    // Check if the last streak of consecutive elements is the longest
    if (count > max_count) 
    {
        max_count = count;
    }
    
    return max_count;
}


int main() 
{
    int arr[] = {1, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 3, 3, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;

    int longest_consecutive = count_longest_consecutive(arr, size, target);

    printf("The longest consecutive occurrence of %d in the array is: %d\n", target, longest_consecutive);

    return 0;
}