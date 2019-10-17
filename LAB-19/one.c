#include<stdio.h>
void arrange(int ch[],int c)
{
    int t;
    for(int i=0;i<c-1;i++)
    {
        for(int j=0;j<(c-i-1);j++)
        {
            if(ch[j]>ch[j+1])
            {
                t=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=t;
            }
        }
    }
    printf("\n sorted array is: ");
    for(int i=0;i<c;i++)
    {
        printf("%d", ch[i]);
    }
}
int main()
{
    int ch[100],ar[100];
    int a,r; 
    printf("Enter no of elemnts; ");
    scanf("%d", &a);
    ch[a];
    printf("Enter %d numbers:",a);
    for(int i = 0;i<a; i++)
        scanf("%d", &ch[i]);
    arrange(ch,a);
    
    return 0;
}
