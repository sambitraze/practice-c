#include <stdio.h>
void display(int age1, int age2)
{
    printf("%d\n", age1);
    printf("%d\n", age2);
    int sum = age1 + age2;
    printf("%d\n\n", sum);

}
int main()
{
    int age1[] = {2, 8, 4, 12};
    int age2[] = {3, 9, 6, 12};
    for(int i=0;i<4;i++)
        display(age1[i], age2[i]); 
    return 0;
}