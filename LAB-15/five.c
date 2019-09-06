#include<stdio.h>
int main()
{
    int r, c, a, arr[100][100];
    printf("Enter no of rows and coloum(non-square):: ");
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
    printf("\nArray elements(non-square)::\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
    if(r>c)
        a=r;
    else
        a=c;
    int ar[a][a];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            ar[a][a]=0;
        }
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            ar[i][j]=arr[i][j];
        }
    }
    printf("\nArray elements(square)::\n");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }

    return 0;
}