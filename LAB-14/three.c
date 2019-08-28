#include<stdio.h>
int main() {
    int r,c,min;
    printf("Enter the values of row and columns :: ");
    scanf("%d %d", &r,&c);
    int arr[r][c];
    printf("Enter the elements in the array :: ");
    for(int  i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    min=arr[0][0];
    for(int  i = 0; i<r; i++) {
        for(int j = 0; j<c; j++) {
            if(min>arr[i][j])
              min=arr[i][j];
            }
    }
    printf("Smallest: %d", min);
    return 0;
}