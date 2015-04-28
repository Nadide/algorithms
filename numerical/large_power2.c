#include <stdio.h>
#include <math.h>
int power[1000];

int main ()
{
	int i,a,n,p;
	double result=1;

	// a=number n=power
	scanf ("%d %d",&a,&n);

	if (n == 1)
		printf ("%d\n",a);
	else 
	{
		power[0]=a;
		for (i=1,p=2; p <= n; p*=2,i++)
			power[i] = power[i-1]*a;

		for (i--,p=0; i>=0; i--)
			if (p+pow(2,i) <= n)
			{
				p += pow(2,i);
				result *= power[(int)pow(2,i)];
			}
		printf ("%.f\n",result);
	}

	return 0;
}
