#include<stdio.h>

int main()
{
    int a,b,sum;
    int *c,*d;
    c=&a;
    d=&b;
    
    printf("Enter a number:");
    scanf("%d %d", &a,&b);         // scanf("%d %d", c,d);   
    
    sum= *c + *d;
    
    printf("%d",sum);
    return 0;
}