#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int array[10];

void swap (int a,int b)
{
	int c;
	c = array[a];
	array[a] = array[b];
	array[b] = c;
}

int main ()
{
	srand (time(NULL));
	int i,j,n;
	array[6]=3;

	scanf ("%d",&n);
	for (i=0; i<n; i++)
		scanf ("%d",&array[i]);

	for (i=0; i<n; i++){
		j = rand()%((n-1)-i+1)+i;
		swap (i,j);
	} 
	
	for (i=0; i<n; i++)
		printf ("%d ",array[i]);
	printf ("\n");
	
	return 0;
}
