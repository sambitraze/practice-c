#include<stdio.h>

void main()
{
    FILE *f,*fo,*fe;
    f = fopen("numbers.txt", "w");
    int c;
    // printf("Enter total number:");
    // scanf("%d",n);
    printf("Data Input\n\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&c);
        putw(c,f);
    }
    fclose(f);

    printf("\nData in numbers.txt\n\n");
    f = fopen("numbers.txt", "r");
    while((c=getw(f))!= EOF)
        printf(" %d",c);
    fclose(f);

    f = fopen("numbers.txt", "r");
    fo = fopen("odd.txt", "w");
    fe = fopen("even.txt", "w");
    while((c=getw(f))!= EOF)
    {
        if(c%2 == 0)
            putw(c,fe);
        else
            putw(c,fo);
    }
    fclose(f);
    fclose(fo);
    fclose(fe);

    fo = fopen("odd.txt", "r");
    fe = fopen("even.txt", "r");

    printf("\n\ncontents of odd file\n\n ");
    while((c=getw(fo))!= EOF)
        printf(" %d",c);

    printf("\n\ncontents of even file\n\n ");
    while((c=getw(fe))!= EOF)
        printf(" %d",c);
    fclose(fo);
    fclose(fe);
}