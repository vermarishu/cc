#include <stdio.h>

int searchInsert(int arr[], int left, int right, int target)
{
    if(left > right)
        return left;

    int mid = (left + right) / 2;
    if(arr[mid] == target)
        return mid;
    if(arr[mid] < target)
        return searchInsert(arr, mid + 1, right, target);
    
    return searchInsert(arr, left, mid - 1, target);
}

int main()
{
    int arr[] = {1,3,5,6};
    int n = 4;
    int target = 7;

    printf("Position = %d\n", searchInsert(arr, 0, n - 1, target));

    return 0;
}