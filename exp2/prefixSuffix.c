#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4};
    int n=4;

    int prefix[4];
    int suffix[4];
    int ans[4];

    int i;
    prefix[0]=1;

    for(i=1;i<n;i++)
        prefix[i]=prefix[i-1]*arr[i-1];

    suffix[n-1]=1;
    for(i=n-2;i>=0;i--)
        suffix[i]=suffix[i+1]*arr[i+1];

    for(i=0;i<n;i++)
        ans[i]=prefix[i]*suffix[i];

    printf("Output: ");

    for(i=0;i<n;i++)
        printf("%d ",ans[i]);
    
    printf("\n");

    return 0;
}