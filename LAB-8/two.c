#include<stdio.h>
int main()
{
       int a,b,c,d,e;
       printf("Enter the Five Numbers :");
       scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
       if (a < b && a < c && a < d && a < e)
       printf("Smallest: %d\n", a);
       if (b < a && b < c && b < d && b < e)
       printf("Smallest: %d\n", b);
       if (c < a && c < b && c < d && c < e)
       printf("Smallest: %d\n", c);
       if (d < a && d < a && d < c && d < e)
       printf("Smallest: %d\n", d);
       if (e < a && e < a && e < c && e < d)
       printf("Smallest: %d\n", e);

       return 0;
} 