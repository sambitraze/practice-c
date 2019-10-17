#include<stdio.h>
int print(int *c)
{
    printf("\nAdress of pointer = %p",c);
    
}
void main()
{
    int a;
    int *b;
    
    printf("\nEnter a number:");
    scanf("%d",&a);
    b=&a;
    printf("\nAdress of pointer = %p",b);
    print(b);
    

}