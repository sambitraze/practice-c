#include<stdio.h>
int main()
{
    int r, c, sum1=0,sum2=0, arr[100][100];
    printf("Enter no of rows and coloum:: ");
    scanf("%d %d", &r, &c);
    arr[r][c];
    printf("Enter array elements::");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("array elements::\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           sum1+=arr[i][j];
           sum2+=arr[j][i];
        }
        printf("sum of row %d :: %d ", i+1, sum1);
        printf("\n");
        printf("sum of column %d :: %d\n", i+1, sum2);
        sum1=0;
        sum2=0;
    }
    return 0;
}