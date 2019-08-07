#include<stdio.h>

int main()
{
    int ch;

    int a, b, c, d, e, tot, per, avg;
    
    printf("Enter marks in five subjects: \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    tot = a + b + c + d + e;
    printf("Total marks five subjects: %d \n", tot);
    avg = tot/5;
    printf("Average marks in five subjects: %d \n", avg);
    per = avg;
    printf("Percentage in five subjects: %d \n", per);
    ch =  per/10;


    switch(ch)
    {
        case 9:        
            printf(" \n Your grade is O \n");
            break;
        case 8:        
            printf(" \n Your grade is A \n");
            break;
        case 7:        
            printf(" \n Your grade is B \n");
            break;
        case 6:        
            printf(" \n Your grade is C \n");
            break;
        case 5:        
            printf(" \n Your grade is D \n");
            break;
        case 4:        
            printf(" \n Your grade is E \n");
            break;
        case 3:
            printf(" \n Your grade is F \n");
            break;
        
    }
    
    return 0;
    
}
