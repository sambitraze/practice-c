// swap without thirs variable

#include<stdio.h>

int main()
{
        int a, b;
        printf("Enter two number for a and b:\n");
        scanf("%d %d", &a, &b);
        
        printf("Values before swapping: %d %d\n", a, b);
        
        a = a + b;
        b = a - b;
        a = a - b;
        
        printf("Values after swapping : %d %d\n", a, b);
        
        return 0;
        
}
