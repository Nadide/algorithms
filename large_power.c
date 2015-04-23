#include <stdio.h>
int pow[1000];

int main ()
{
	int i,a,n,p,pp;
	double result;

	// a=number n=power
	scanf ("%d %d",&a,&n);

	p=1;
	pow[0] = a;
	if (n!=1){
	for (i=1,p*=2; p <= n; p*=2,i++)
		pow[i] = pow[i-1]*a;

	i--;
	p/=2;
	pp = p;
	result = pow[i];
	for (p/=2,i--; pp != n; p/=2,i--)
	{
		if ((pp+p) <= n)
		{
			pp+=p;  
			result *= pow[i];
		}
	}
	printf ("%f\n",result);
	}
	else
		printf ("%d\n",a);
	return 0;
}
