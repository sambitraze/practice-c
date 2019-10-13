#include<stdio.h>

int main()
{
    int a,*A;
    char b,*B;
    float c,*C;
    double d,*D;
    A=&a;
    B=&b;
    C=&c;
    D=&d;
   printf("\nEnter an integer: ");
   scanf("%d", &a);
   printf("\nEnter an char: ");
   scanf("%c", &b);
   printf("\nEnter an float: ");
   scanf("%f", &c);
   printf("\nEnter an double: ");
   scanf("%lf", &a);
   printf("\nStored int value: %d", *A);
   printf("\nStored char value: %c", *B);
   printf("\nStored float value: %f", *C);
   printf("\nStored double value: %lf", *D);

    printf("\nsize of *int : %d", sizeof(int*));
    printf("\nsize of *char : %d", sizeof(char*));
    printf("\nsize of *float : %d", sizeof(float*));
    printf("\nsize of *double : %d", sizeof(double*));

    return 0;    
}