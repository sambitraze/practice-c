#include<stdio.h>

int main()
{
    int a[100];
    int b,n;
    printf("Enter no of elements: ");
    scanf("%d", &n); 
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d", i+1);
        scanf("%d ", &a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("array: %d ", a[i]);        
    }
    printf("Enter element no to delete: ");
    scanf("%d", &b);

    a[b-1]=0;

    for(int i=0;i<n;i++)
    {
        printf("array: %d ", a[i]);        
    }
}