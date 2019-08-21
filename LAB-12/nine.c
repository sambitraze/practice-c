#include <stdio.h>

int main()
{
    int arr[100],n,i,sum1=0,sum2=0;
    int temp;
     
    printf("Enter total number of elements: ");
    scanf("%d",&n);
    
    printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i < n;i++)
    {
        if(arr[i]%2==0)
            sum1+=arr[i];
        else
            sum2+=arr[i];        
    }
     
    printf("\nArray elements are:\n");
    for(i=0;i < n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Difference betweenn sum of all even and sum of all od elemnts is: %d", sum1-sum2);

    return 0;
}