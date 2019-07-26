// seconds in hrs min and sec

#include<stdio.h>

int main()
{
        int given_sec = 7560, hrs, min, sec;
        
        printf("Given time in seconds is: %d\n", given_sec);
        
        hrs = given_sec/3600;
        min = (given_sec%3600)/60;
        sec = (given_sec%3600)%60;
        
        printf("given time is: %dHrs %dMin %dSec \n", hrs, min , sec);
        
        return 0;
        }
