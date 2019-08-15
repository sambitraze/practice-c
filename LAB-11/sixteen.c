#include<stdio.h>
#include<math.h>
int main()
{       
        int n;        
        float sum = 0, a;
        printf("Enter no of terms you want to calculate: ");
        scanf("%d", &n);
        for(int i=1;i<=n;i++)
        {  
            a = 1/pow(i,i);
            sum = sum + a;
            
        }
        printf("Result = %.5f \n", sum);
    return 0;
}
