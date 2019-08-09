#include <stdio.h>
int main()
{
    int i, j, k, rows;
    k=1;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1; i<=rows; i++)
    {
        for(j=i; j>=1; j--)
        {
            if(j%2==0)
                printf("0");
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
    }
    return 0;
}