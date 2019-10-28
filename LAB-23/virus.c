#include <stdlib.h>
#include <time.h>

static int srand_called=0;

char *random_pw(char *dest)
{
    size_t len=0;
    char *p=dest;
    int three_in_a_row=0;
    int arr[128]={0x0};

	/* be sure to have called srand exactly one time */
	if(!srand_called)
	{
		srandom(time(NULL));
		srand_called=1;
	}
	*dest=0x0; /* int the destination string*/
	for(len=6 + rand()%3; len; len--, p++) /* gen characters */
	{
		char *q=dest;
		*p=(rand()%2)? rand()%26 + 97: rand()%10 + 48;
		p[1]=0x0;
		arr[*p]++;                         /* check values */
		if(arr[*p]==3)
		{
			for(q=dest; q[2]>0 && !three_in_a_row; q++)	
				if(*q==q[1] && q[1]==q[2])
			   		three_in_a_row=1;
		}
		if(three_in_a_row || arr[*p]> 3 )
			return random_pw(dest);        /* values do not pass try again */
	}
    return dest;
}