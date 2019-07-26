// c to f


#include<stdio.h>

int main()
{
        float c, f;
        
        printf("Enter temperature in celsius:\n");
        scanf("%f", &c);
        
        f = ((c/5)*9)+32;
        
        printf("Temperature in farhenheit is: %f\n", f);
        
        return 0;
} 
        
        
