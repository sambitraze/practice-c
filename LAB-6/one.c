#include<stdio.h>
int main()
{
         int num,d,rev=0;
         printf("Enter the number ::");
         scanf("%d", &num);
         while(num!=0)
         {
                  d=num%10;
                  rev=rev*10+d;
                  num/=10;
         }
         printf("revrersed no: %d", rev);
         
         return 0;
         }
         
