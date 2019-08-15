#include<stdio.h>
#include<math.h>

int main()
{       
        int n,x,s=0,sign=1;        
        float sum=0, fact=1, a,b;
        printf("Enter no of terms you want to calculate: ");
        scanf("%d", &n);
        printf("Enter term x: ");
        scanf("%d", &x);
        for(int i=1;i<=n;i++)
        {
                s+=2;
        }
        for(int i=1;i<=s;i++)
        {   
            b=pow(x,i);
            fact = fact*i;
            if(i%2==0)
            {
            a = b/fact;
            sum = sign*(sum + a);
            sign*=-1;
            }
        }
        printf("Result = %.4f \n", sum);
    return 0;
}
//