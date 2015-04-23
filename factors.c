#include <stdio.h>

int main ()
{
	int i,j,number;
	int factors[1000];

	scanf ("%d",&number);

	for (i=2,j=0; i<number; i++)
		while (number%i==0)
		{
			factors[j++]=i;
			number/=i;
		}
	if (number>1)
		factors[j++]=number;
	
	for (i=0; i<j; i++)
		printf ("%d ",factors[i]);
	printf ("\n");

	return 0;
}
