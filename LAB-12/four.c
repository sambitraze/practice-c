#include<stdio.h>
int main()
{
    int a[5], sum=0;
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
    for(int i=0;i<5;i++)
        sum+=a[i];

    printf("\n Result : %d", sum);
    printf("\n avg : %d", sum/5);
    
    return 0;
}
