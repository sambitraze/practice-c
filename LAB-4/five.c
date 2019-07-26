// swap 2 nos using third variable

#include<stdio.h>

int main()
{
        int a = 1, b = 0, c;
        
        printf("Value of a and b before swap is: %d and %d\n", a, b);
        
        c = a;
        a = b;
        b = c;
        
        printf("Value of a and b after swap is: %d and %d\n", a, b);
        
        return 0;
}
       

