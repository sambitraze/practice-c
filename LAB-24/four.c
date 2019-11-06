#include<stdio.h>

void main()
{
    FILE *fp;
    fp = fopen("INPUT", "w");
    char c;
    printf("Data Input\n\n");
    while((c=getchar())!= EOF)
        fputc(c,fp);
    fclose(fp);
    printf("\nData Output\n\n");
    fp = fopen("INPUT", "r");
    while((c=fgetc(fp))!= EOF)
        printf("%c",c);
    fclose(fp);
}