    #include <stdio.h>
    int main()
    {
        double n1, n2, n3, n4;
        printf("Enter three numbers: ");
        scanf("%lf %lf %lf", &n1, &n2, &n3);
        if (n1>=n2)
        {
            if(n1>=n3)
            	{
            		if(n1>=n4)
            			printf("%.2lf is the largest number.", n1);
            		else
            			printf("%.2lf is the largest number.", n4);
            	}
            else
            	{
            		if(n3>=n4)
            			printf("%.2lf is the largest number.", n3);
            		else
            			printf("%.2lf is the largest number.", n4);
            	}
        }
        else
        {
            if(n2>=n3)
            {
            	if(n2>=n4)
            		printf("%.2lf is the largest number.", n2);
            	else
            		printf("%.2lf is the largest number.", n4);
            }
            else
            {
            	if(n3>=n4)
            		printf("%.2lf is the largest number.", n3);
            	else
                        printf("%.2lf is the largest number.",n4);
            }
        }
     return 0;
    }
