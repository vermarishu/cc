#include <stdio.h>

int searchInsert(int arr[], int n, int target)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(arr[i] >= target)
            return i;
    }
    return n;
}

int main()
{
    int arr[] = {1,3,5,6};
    int n = 4;
    int target = 5;

    printf("Position = %d\n", searchInsert(arr, n, target));

    return 0;
}