#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4};
    int n=4;

    int ans[4];
    int i;

    ans[0]=1;
    for(i=1;i<n;i++)
        ans[i]=ans[i-1]*arr[i-1];

    int right=1;
    for(i=n-1;i>=0;i--)
    {
        ans[i]*=right;
        right*=arr[i];
    }
    printf("Output: ");

    for(i=0;i<n;i++)
        printf("%d ",ans[i]);

    printf("\n");

    return 0;
}