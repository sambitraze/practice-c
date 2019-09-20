#include <stdio.h>

int sum(int x)
{
    int sum = 0, remainder;
    while (x != 0)
   {
      remainder = x % 10;
      sum       = sum + remainder;
      x         = x / 10;
   }
   return sum;

}
 
int main()
{
   int n,t,s;
 
   printf("Enter an integer\n");
   scanf("%d", &n);
 
   t = n;
   s=sum(t);
   
 
   printf("Sum of digits of %d = %d\n", n, s);
 
   return 0;
}