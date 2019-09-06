#include<stdio.h>
int main()
{
    int r, c, sum=0, arr[100][100];
    printf("Enter no of rows and coloum:: ");
    scanf("%d %d", &r, &c);
    arr[r][c];
    printf("\nCalculating........................ \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("%d x %d = %d \t",i+1, j+1, (i+1)*(j+1));
        }
        printf("\n");
    }
    printf("\n\t\t\tMultiplication Table \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf("%d \t",(i+1)*(j+1));
        }
        printf("\n");
    }
    return 0;
}