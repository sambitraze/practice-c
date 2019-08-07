#include<stdio.h>

int main()
{
    int ch;

    float r, h, b, l, m, a;
    
    printf("\t\t\t Area calculator\n");
    printf("1.Area Of Circle\n");
    printf("2.Area Of Triangle\n");
    printf("3.Area Of Rectangle\n");
    printf("4.Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:        
            printf("Enter radius of circle: \n");
            scanf("%f", &r);
            a = 3.14 * r * r;
            break;
        case 2:
            printf("Enter base and height: \n");
            scanf("%f %f", &h, &b);
            a = h * b;
            break;
        case 3:
            printf("Enter length and breadth: \n");
            scanf("%f %f", &l, &m);
            a = l * m;
            break;
        case 4:
            break;
        
    }
    printf("\n Area = %f", a);
    return 0;
    
}