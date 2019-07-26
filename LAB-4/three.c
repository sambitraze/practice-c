// area of circle

#include<stdio.h>

#define pi 3.14
int main()
{
        float area;
        int radius = 10;
        
        printf("given radius of circle: %d\n", radius);
        
        area = (pi * radius * radius);
        
        printf("area of circle is: %f\n", area);
        
        return 0;
}
