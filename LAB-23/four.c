#include<stdio.h>
struct distance
{
    int km,m; 
};
void main()
{
    struct distance d1,d2;
    int res_km,res_m;
    printf("\n\n\t\t Enter data for distance 1:");
    printf("\n\nEnter KiloMeter:");
    scanf("%d",&d1.km);
    printf("\nEnter Meter:");
    scanf("%d",&d1.m);
    printf("\n\n\t\t Enter data for distance 2:");
    printf("\n\nEnter KiloMeter:");
    scanf("%d",&d2.km);
    printf("\nEnter Meter:");
    scanf("%d",&d2.m);

    res_km=d1.km + d2.km + ((d1.m+d2.m)/1000);
    res_m=((d1.m+d2.m)%1000);
    res_km=d1.km*d1.m;
    res_m=d2.kmd 2.m;


    printf("\n\n\t\t Resultant Distance:");
    printf("\nResultant KiloMeter: %d",res_km);
    printf("\nResultant Meter: %d",res_m);
        
}