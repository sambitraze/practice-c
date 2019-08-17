//swap print

#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6}, temp;
    for(int i =0;i<6;i++)
    {
        if(i%2==0)
        {
            temp = a[i];
            a[i]=a[i+2];
            a[i+2]=temp;
        }
        else
        {
            temp = a[i];
            a[i]=a[i+2];
            a[i+2]=temp;
        }
        
    }
    for(int i =0;i<6;i++)
        printf("%d ", a[i]);
    return 0;
}