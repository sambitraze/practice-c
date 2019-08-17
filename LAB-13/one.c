#include<stdio.h>
int main()
{
    int ar[5];
    for(int i=0;i<5;i++)
    {
        printf("\n Enter array %d:", i+1);
        scanf("%d", &ar[i]);
    }
    printf("%d ", ar[0]);
    for(int i=0;i<4;i++)
    {
        printf("%d ",ar[i] + ar[i+1]);
    }
    
    return 0;
}