#include<stdio.h>

void main()
{
    int i, n, *a;
    printf("Enter no of elements:");
    scanf("%d",n);
    a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i+)
    {
        scanf("%d", a+i)  // a[i]
    }
    for(i =0;i<n;i++)
    {
        printf("%d",*(a+i));
    }
}