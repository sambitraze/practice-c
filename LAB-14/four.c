#include<stdio.h>
int main() 
{
    int r,c;
    printf("Enter the values of row and columns :: ");
    scanf("%d %d", &r,&c);
    int arr1[r][c],arr2[r][c],arr3[r][c];
    printf("Enter the elements in the array :: ");
    for(int  i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements in the array :: ");
    for(int  i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
           scanf("%d", &arr2[i][j]);
        }
    }
    for(int  i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("result :: ");
    printf("\n");
    for(int  i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            printf("%d ", arr3[i][j]);
        }
    printf("\n");
    
    }

    return 0;
}