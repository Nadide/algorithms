// Greatest Common Divisor
// GCD (A,B) = GCD (B,A Mod B)
#include <stdio.h> 

int main ()
{
	int a,b,mod,i;

	// a > b
	scanf ("%d %d",&a,&b);
	while (b != 0)
	{
		mod = a%b;
		a = b;
		b = mod;
	}
	printf ("%d\n",a);

	return 0;
}
