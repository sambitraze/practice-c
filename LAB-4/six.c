//convert paise to ruppe and paise

#include<stdio.h>

int main()
{
        int paise_given = 315, rupee, paise;
        
        printf("given value of paise is: %d\n", paise_given);
        
        rupee = paise_given/100;
        paise = paise_given%100;
        
        printf("given value of paise in ruppe and paise is: %d rupee %d paise \n", rupee, paise);
        
        return 0;
        }
