// add two time details

#include<stdio.h>

int main()
{
        int h1,h2,h,m1,m2,m,s1,s2,s;
        
        printf("Enter time 1 in HH:MM:SS \n");
        scanf("%d %d %d", &h1, &m1, &s1);
        
        printf("Enter time 2 in HH:MM:SS \n");
        scanf("%d %d %d", &h2, &m2, &s2);
        
        h=(h1+h2) + (m1+m2)/60;
        m=(m1+m2)%60 + (s1+s2)/60;
        s=(s1+s2)%60;
        
        printf("Sum of time 1 and time 2 is %dhrs %dmin %dsec\n", h,m,s);
        
        return 0;
        } 
       
