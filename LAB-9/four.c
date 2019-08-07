#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    int i = 1;
    printf("odd numbers between o and %d is: ", n);
    while(i<=n)
    {
    	
    	printf("%d ",i );
    	i+=2;
    }
    return 0;
    }
