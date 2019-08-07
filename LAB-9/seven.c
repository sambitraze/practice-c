#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);
    
    printf("series  between %d and 0 is: ", n);
    while(n!=0)
    {
    	
    	printf("%d ",n );
    	n-=5;
    }
    return 0;
    }
