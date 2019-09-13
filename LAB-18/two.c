#include<stdio.h>
void fact(int);
void main()
{
     int a;
     printf("enter a number of which you wnat to find factorial: ");
     scanf("%d", &a);
     fact(a);
}
void fact(int x)
{   int n=1;
    for(int i=1;i<=x;i++)
        n*=i;
    printf("\n factorial = %d", n);
    
}