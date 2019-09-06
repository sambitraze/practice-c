#include<stdio.h>
int main()
{
    int r, c, a, arr1[100][100],arr2[100][100];
    printf("Enter no of rows and coloum(non-square):: ");
    scanf("%d %d", &r, &c);
    arr1[r][c];
    arr2[r][c];
    printf("\n Enter array (A) elements::");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n Enter array (A) elements::");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr3[r][c];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            a=0;
            for(int k=0;k<c;k++)
            {
                a+=arr1[i][k]*arr2[k][j];
            }
            arr3[i][j]=a;
        }
    }
    
    
    printf("\nArray elements(square)::\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", arr3[i][j]);
        }
    printf("\n");
    }

    return 0;
}