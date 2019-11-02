#include<stdio.h>

union abc{
    char a;
    int b
};
void main()
{
    union abc ob;
    ob.a='A';
    printf("\nchar: %c",ob.a);
    ob.b=100;
    printf("\nint: %d",ob.b);

    ob.a='B';
    ob.b=100;
    printf("\nchar: %c",ob.a);
    printf("\nint: %d",ob.b);
}