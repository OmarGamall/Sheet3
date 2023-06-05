/*Write a C function that return 0 if a given number is a power of 3,
otherwise return 1*/
#include <stdio.h>
int IsPowerOf3(int num)
{
    while (num > 1)
    {
        if (num % 3 != 0)
        {
            //not a power of 3
            return 0;
        }
        num /= 3;
    }
    return 1;
}

void test_IsPowerOf3()
{
    int testCases[] = {1, 3, 9, 27, 81, 243, 729, 2, 4, 8, 16, 32, 64, 128, 256};
    int expectedResults[] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    int numTestCases = sizeof(testCases) / sizeof(int);

    for (int i = 0; i < numTestCases; i++)
    {
        int num = testCases[i];
        int expectedResult = expectedResults[i];
        int result = IsPowerOf3(num);
        if (result != expectedResult)
        {
            printf("Test failed for num = %d. Expected result = %d, actual result = %d\n", num, expectedResult, result);
        }
        else
        {
            printf("test %d passed\n", i);
        }
    }
}

int main()
{
    test_IsPowerOf3();
    return 0;
}