#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {   
        printf("\n Enter element :");
        scanf("%d ", &a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("\n Element %d :", i);
        printf("%d ", a[i]);
    }
    return 0;
}
