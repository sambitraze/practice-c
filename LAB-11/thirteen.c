#include<stdio.h>

int main()
{       
        int n;        
        float sum = 1.0000, fact=1, a;
        printf("Enter no of terms you want to calculate: ");
        scanf("%d", &n);
        for(int i=1;i<n;i++)
        {   
            fact = fact*i;
            a = 1/fact;
            sum = sum + a;
            
        }
        printf("Result = %.4f \n", sum);
    return 0;
}
//