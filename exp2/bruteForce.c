#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4};
    int n=4;
    int ans[4];
    int i,j;

    for(i=0;i<n;i++)
    {
        int product=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
                product*=arr[j];
        }
        ans[i]=product;
    }

    printf("Output: ");

    for(i=0;i<n;i++)
        printf("%d ",ans[i]);
        
    printf("\n");
    
    return 0;
}