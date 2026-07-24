#include <stdio.h>

int containsDuplicate(int arr[], int n, int k)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j] && (j - i) <= k)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[] = {1,2,3,1};
    int n = 4;
    int k = 3;

    if(containsDuplicate(arr,n,k))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}