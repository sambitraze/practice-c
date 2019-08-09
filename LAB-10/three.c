#include <stdio.h>
int main()
{
 int sum = 0; 
 int n;
 printf("Enter no of terms for series :\n");
 scanf("%d", &n);
    for (int i = 1 ; i <= n ; i++) 
        for (int j = 1 ; j <= i ; j++) 
            sum += j; 
    printf("%d",sum);
    return 0;

}