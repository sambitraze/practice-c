#include<stdio.h>
int main()
{
    int r, c, sum1, sum2, arr[100][100];
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
    printf("\nEntered array is::\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    sum1=sum2=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           sum1+=arr[i][j];
           sum2+=arr[j][i];
        }
        printf("Difference between column %d and row %d is %d", i+1, i+1, sum2-sum1);
        sum1=0;
        sum2=0;
        printf("\n");
    }
    return 0;
}