#include<stdio.h>


int main()
{

    int num[100]; 
    int i, number_of_digits; 
    scanf("%d", &number_of_digits); 
    for (i = 0; i < number_of_digits; i++) {  
        scanf("%d", &num[i]); 
    } 
  
    
    while(num[i]!='\0')
    {
        if(num[i] > 5)
            num[i]='H';
        else if(num[i] < 5 && num[i] > 0)
            continue;
        else if(num[i] == 0)
            num[i]='Z';
    }
    for (i = 0; i < number_of_digits; i++)  
        printf("%d ", num[i]); 
    return 0;
}