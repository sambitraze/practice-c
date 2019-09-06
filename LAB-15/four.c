#include<stdio.h>
int main()
{
    int r, c, max, arr[100][100];
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
    printf("Enter array elements::");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
    max=arr[0][0];
    for(int i=0;i<r;i++)
    {
        //for rows
        for(int j=0;j<c;j++)
        {
            if(max<arr[i][j+1])
                max=arr[i][j+1];
        }
        printf("Max of row %d :: %d", i+1, max);
    }
    max=arr[0][0];
    for(int i=0;i<r;i++)
    {
        //for column
        for(int j=0;j<c;j++)
        {
            if(max<arr[i+1][j])
                max=arr[i+1][j];
        }
        printf("Max of column %d :: %d", i+1, max);
    }

    return 0;
}