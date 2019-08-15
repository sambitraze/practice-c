#include<stdio.h>
int main()
{  
    int ch=65;    
    int i,j,k,m;    
    int rows;
    printf("Enter no of rows of pattern you want to print: ");
    scanf("%d", &rows); 
    for(i=1;i<=rows;i++)    
    {    
        for(j=rows;j>=i;j--)    
            printf(" ");    
        for(k=1;k<=i;k++)    
            printf("%c",ch++);    
            ch--;    
        for(m=1;m<i;m++)    
            printf("%c",--ch);    
        printf("\n");    
        ch=65;    
    }    
return 0;  
}  