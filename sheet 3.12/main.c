/*Write c function to take an array (with unknown size) contain 2 zeros
swap the 3 element after the first zero with the 3 element after the second
zero ( x,x,x,0,1,2,3,xxxx,0,5,6,7,xxxx ->swap 1,2,3with 5,6,7).*/
#include <stdio.h>
int Swap_elements(int arr[])
{
    int zero_count = 0;
    int first_idx = 0;
    int sec_idx = 0;
    for (int i = 0; ((zero_count < 2) || arr[i] == '\0'); i++)
    {
        if (arr[i] == 0)
        {
            zero_count++;
        }
        if ((zero_count == 1) && (first_idx == 0))
        {
            // the 3 element after the first zero
            first_idx = i + 1;
        }
        if (zero_count == 2)
        {
            // the 3 element after the second zero
            sec_idx = i + 1;
            break;
        }
    }

    // check the valiadation
    // check the two zeros has been found
    if (zero_count == 2)
        return -1;
    int j = 0;
    // Swap
    while (j < 3)
    {
        int temp = arr[first_idx];
        arr[first_idx] = arr[sec_idx];
        arr[sec_idx] = temp;
        first_idx++;
        sec_idx++;
        j++;
    }
    return 1; // task done
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
    int arr[] = {1, 2, 3, 0, 4, 5, 6, 7, 0, 8, 9, 10, '\0'};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Before swapping: ");
    print_array(arr, size);
    printf("\n");

    Swap_elements(arr);

    printf("After swapping: ");
    print_array(arr, size);
    printf("\n");

    return 0;
}

