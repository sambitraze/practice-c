#include<stdio.h>
int main()
{
    int rows, a = 1,k=1;

    printf("Enter no of rows of pattern you want to print: ");
    scanf("%d", &rows);

    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
           if(k%2==0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            k++;
        }
        printf("\n");
    }
    return 0;
}