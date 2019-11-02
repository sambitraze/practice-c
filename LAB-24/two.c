#include<stdio.h>
#include<string.h>

struct Bio{
    char name[100];
    int roll;
    char gender[10];
    int marks;
};
 void main()
 {
    struct Bio b,*a;
    a = &b; 
    printf("\nEnter name of student:");
    scanf("%s",a->name);
    printf("\nEnter roll:");
    scanf("%d",&a->roll);
    printf("\nEnter gender:");
    scanf("%s",a->gender);
    printf("\nEnter marks:");
    scanf("%d",&a->marks);

     printf("\nName:");
     puts(a->name);
     printf("\nroll: %d",a->roll);
     printf("\n\nGender:");
     puts(a->gender);
     printf("\nMarks: %d",a->marks);
 }