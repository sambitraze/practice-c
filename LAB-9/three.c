#include<stdio.h>

int main()
{
    int ch;

    float a, b, res;
    
    printf("\t\t\t Calculator\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiply\n");
    printf("4.division\n");
    printf(" Enter your choice: \n");
    scanf("%d", &ch);       


    switch(ch)
    {
        case 1:        
            printf(" Enter two numbers: \n");
            scanf("%f %f", &a, &b);
            res = a + b;
            printf("Answer is: %f\n", res); 
            break;
        case 2:        
            printf(" Enter two numbers: \n");
            scanf("%f %f", &a, &b);
            res = a - b;
            printf("Answer is: %f\n", res); 
            break;
        case 3:        
            printf(" Enter two numbers: \n");
            scanf("%f %f", &a, &b);
            res = a * b;
            printf("Answer is: %f\n", res); 
            break;
        case 4:        
            printf(" Enter two numbers: \n");
            scanf("%f %f", &a, &b);
            res = a / b;
            printf("Answer is: %f\n", res); 
            break;
        default :
            printf(" Invaliid !!!!!!!...exiting/...\n");
        
    }
    
    return 0;
 }
