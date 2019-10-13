#include<stdio.h>
#include<string.h>

int main()
{
    int ar[100];
    int n,a;
    printf("Enter no of elements");
    scanf("%d", &n);
    ar[n];
    printf("Enter a string");
    gets(ar);
    a=n%2;
        if(a=0)
        {
            char c=' ';
            for(int b=0;b<=a;i++)
            {
                int i=n/2;
                int j=i+1;
                strcpy(c,ar[i]);
                strcpy(c,ar[j]);
                i--;
                j++;

            }
        }
    puts(ar);
    return 0;
}