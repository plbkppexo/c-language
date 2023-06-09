#include <stdio.h>

void removeTarget(int *array, int size, int target);

int main()
{
    int num, count, target, i;

    scanf("%d", &num);
    scanf("%d", &count);

    int numbers[num];
    int *numbersPtr = &numbers[0];

    // initialize array numbers from 1 to num by numbersPtr
    for (
        i = 0; i < num; i++, numbersPtr = &numbers[i])
    {
        *numbersPtr =
            i + 1;
    }

    // loop through count
    for (
        i = 0; i < count; i++)
    {
        scanf("%d", &target);
        removeTarget(&numbers[0], num, target);
    }

    numbersPtr = &numbers[0];

    // print elements in numbers using numberPtr
    for (
        i = 0; i < num; i++, numbersPtr = &numbers[i])
    {
        printf("%d ", *numbersPtr);
    }
    puts("");
    return 0;
}

// remove target from array by pointer *array and append last position by 0
void removeTarget(int *array, int size, int target)
{

    int i, j;
    for (i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            array[i] = array[i + 1];
            for (j = i + 1; j < size; j++)
            {
                array[j] = array[j + 1];
            }
            array[size - 1] = 0;
        }
    }
}