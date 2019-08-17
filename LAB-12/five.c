#include<stdio.h>

int main()
{
         int a[5], b;
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
     
     b = a[0];
     for(int i=0;i<5;i++)
     {
         
         if(b<a[i])
            b = a[i];
     }
    printf("Max = %d", b);
    return 0;
    }
