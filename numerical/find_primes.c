#include <stdio.h>
#include <math.h>

int main ()
{
	int c[10000];
	int i,number,prime;
	float stop;

	scanf ("%d",&number);

	for (i=4; i<number; i+=2)
		c[i]=1;

	prime = 3;
	stop = sqrt(number);
	while (prime < stop)
	{
		for (i=prime*2; i<number; i+=prime)
			c[i]=1;

		prime+=2;
		while (prime<=number && c[prime])
			prime+=2;
	}

	for (i=2; i<number; i++)
		if (c[i]==0)
			printf ("%d ",i);
	printf ("\n");

	return 0;
}
