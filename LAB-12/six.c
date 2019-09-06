#include<stdio.h>

int main()
{
        int i, j, a, n, ch, number[30];
        printf("Enter the value of N \n");
        scanf("%d", &n);
 
        printf("Enter the numbers \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);

        printf("ENter 1 for ascending sorting and 2 for descending sorting: ");
        scanf("%d", &ch);
        switch(ch)
        {
        case(1):
        {
            for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                { 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                 }
             }
        }
        printf("The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
        break;
        }
        case(2):
        {
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] < number[j]) 
                { 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                 }
             }
        }
        printf("The numbers arranged in descending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);

        }
        break;
        }
        
    return 0;
}