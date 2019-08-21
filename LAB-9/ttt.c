#include<stdio.h>
int main()
{
    int dec,bin=0,rem,p=1;
    printf("Enter a decimal number:");
    scanf("%d", &dec);
    while (dec>0)
    {
        rem=dec%2;
        bin=bin+rem*p;
        dec/=2;
        p*=10;

    }
    printf("Equivalent binary form is: %d", bin);
    return 0;

}