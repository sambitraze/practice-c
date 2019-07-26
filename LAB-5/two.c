// avg mark and percentage

#include<stdio.h>

int main()
{
        int a1, a2, a3, a4, a5;
        float avg, per = 0;
        
        printf("Enter marks in five subject each out of 100 :");
        scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
        
        avg = (a1+a2+a3+a4+a5)/5;
        per = ((a1+a2+a3+a4+a5)/5);
        
        printf("Avg marks in all five subject is: %f\n", avg);
        printf("Percentage in all five suvjects: %f\n", per);
        
        return 0;
       }

