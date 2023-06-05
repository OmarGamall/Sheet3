/*Write a C function that take two numbers and return array contain all
numbers between the two given numbers. (numbers 2,6->return array
contain [3,4,5]).*/
#include <stdlib.h>
#include <stdio.h>
// constrains: n1<n2
int *numbersInBetween(int n1, int n2)
{
    // check n1,n2
    if (n1 > n2)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    int size = (n2 - n1) - 1;
    int *arr = (int *)malloc((size) * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        arr[i] = n1 + i + 1;
    }
    return arr;
}

void print_array(int arr[],int size)
{
    printf("[");
    for (int i = 0; i < size; i++)
    {
        if(i==size-1)
        printf("%d", arr[i]);
        else
        printf("%d ,", arr[i]);
    }
    printf("]");
}

int main()
{
    int *arr = NULL;
    int min,max;
    printf("min=");
    scanf("%d",&min);
    printf("max=");
    scanf("%d",&max);
    int size=(max-min)-1;
    arr = numbersInBetween(min, max);
    printf("elements between %d and %d \n",min,max);
    print_array(arr,size);
}