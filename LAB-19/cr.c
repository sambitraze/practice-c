#include<stdio.h>
void main()
{
    int num, x = 0,d;
    int A[1000];
    printf("Enter the number :: ");
    scanf("%d", &num);
    int copy = num;
    while (copy != 0 )
    {
        /* code */
        d = copy%10;
        copy/= 10;
        A[x++] = d;
    }
    int l = ;
    printf("%d", l);
    
}