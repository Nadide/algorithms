#include <stdio.h>
#include <math.h>

int main ()
{
	int c[10000];
	int i,number,prime,stop;

	scanf ("%d",&number);

	prime = 2;
	//stop = sqrt (number);
	while (prime<number)
	{
		for (i=prime*2; i<number; i+=prime){
			//printf ("%d ",i);
			c[i]=1;
		}
		//printf ("\n\n\n");

		prime++;
		while (c[prime] && prime<number)
			prime++;
	}

	for (i=2; i<number; i++)
		if (c[i]==0)
			printf ("%d ",i);
	printf ("\n");
	return 0;
}
