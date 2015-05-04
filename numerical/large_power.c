#include <stdio.h>
#include <math.h>
float l[1000];

int main ()
{
	int n,p,psum=0,i,j;
	float a,result=1;

	// a=number n=power
	scanf ("%f %d",&a,&n);
	
	l[0] = a;
	for (i=1,p=2; p<=n; i++,p*=2)
		l[i] = l[i-1]*l[i-1];

	for (p/=2,i--; (psum!=n && i>=0); i--,p/=2) // i>0 && ..
	{
		if (psum+p <= n)
		{
			psum+= p;
			result*= l[i];
		}
	}
	printf ("%.f\n",result);

	return 0;
}
