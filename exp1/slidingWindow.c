#include <stdio.h>

int containsDuplicate(int arr[], int n, int k)
{
    int lastIndex[10000];
    int i;

    for(i=0;i<10000;i++)
        lastIndex[i]=-1;

    for(i=0;i<n;i++)
    {
        if(lastIndex[arr[i]]!=-1 &&
           i-lastIndex[arr[i]]<=k)
        {
            return 1;
        }

        lastIndex[arr[i]]=i;
    }
    return 0;
}

int main()
{
    int arr[]={1,0,1,1};
    int n=4;
    int k=1;

    if(containsDuplicate(arr,n,k))
        printf("True\n");
    else
        printf("False\n");

    return 0;
}