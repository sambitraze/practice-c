#include<stdio.h>

int main()
{
         int a;
         char b;
         float c;
         long  d;
         double e;
         
         printf("Enter a int number :\n");
         scanf("%d", &a);
         printf("size of entered int is: %li\n", sizeof(a));
         printf("Enter a char :\n");
         scanf("%c", &b);
         printf("size of entered char is: %li\n", sizeof(b));
         printf("Enter a float number :\n");
         scanf("%f", &c);
         printf("size of entered float is: %li\n", sizeof(c));
         printf("Enter a long number :\n");
         scanf("%li", &d);
         printf("size of entered long is: %li\n", sizeof(d));
         printf("Enter a double number :\n");
         scanf("%lf", &e);
         printf("size of entered double is: %li\n", sizeof(e));
         
         return 0;
         }        
