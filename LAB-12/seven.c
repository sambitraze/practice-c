#include<stdio.h>
int main()
{
    int a[5];
    for(int i=1;i<5;i++)
    {   
        //printf("\n Enter element %d:", i+1);
        scanf("%d ", &a[i-1]);
    }
    for(int i=0;i<5;i++)
    {
        if(i%2==0)
            continue;
        else
        {
            printf("\n Element %d :", i);
            printf("%d ", a[i]);
        }       
        
    }
    return 0;
}
