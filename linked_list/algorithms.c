#include <stdio.h>
#include <malloc.h>
#define X (node*)malloc(sizeof(node))

struct node
{
	int value;
	struct node *next;
} typedef node;

void writelist (node *root)
{
	node *node1;

	node1 = root;
	while (node1 != NULL)
	{
		printf ("%d ",node1->value);
		node1 = node1->next;
	}
	printf ("\n");
}

node* addafter (node *node1, node *input)
{
	node *new;
	
	new = X;
	new->value = input->value;
	new->next = node1->next;
	node1->next = new;
	
	return node1;
}

node* copylist (node *root)
{
	node *node1,*node2,*copy;
	
	node1 = root;
	copy = node2 = X;
	while (node1->next != NULL)
	{
		copy->value = node1->value;
		copy->next = X;
		copy = copy->next;
		node1 = node1->next;
	}
	copy->value = node1->value;
	copy->next = NULL;
	
	return node2;
}

node* insertsort (node *input)
{
	node *sentinel,*node1;

	sentinel = X;
	sentinel->next = X;
	sentinel->next->value = input->value;
	sentinel->next->next = NULL;
	input = input->next;

	node1 = sentinel;
	while (input != NULL)
	{
		while (node1->next!=NULL && (node1->next->value)<(input->value))
			node1 = node1->next;
		node1 = addafter (node1,input);
		input = input->next;
		node1 = sentinel;
	}

	return sentinel->next;
}

node* selectsort (node *input)
{
	node *node1,*sentinel,*minnode;
	int min;
		
	sentinel = X;
	sentinel->next = NULL;

	node1 = input;
	while (node1 != NULL)
	{
		min = node1->value;
		minnode = node1;
		while (node1 != NULL)
		{
			if (node1->next->value <= min)
			{
				min = node1->next->value;
				minnode = node1->next;
			}
			node1 = node1->next;
		}
		addafter (sentinel,minnode);
		minnode = minnode->next->next;
		node1 = input;
	}
	
	return sentinel;
}

int main ()
{
	node *root,*node1,*node2,*copy;
	int i;

	// creating lists
	root = node1 = X;
	for (i=0; i<9; i++)
	{
		scanf ("%d",&node1->value);
		node1->next = X;
		node1 = node1->next;
	}
	scanf ("%d",&node1->value);
	node1->next = NULL;


	// copying lists
	printf ("\nroot ->  ");
	writelist (root);
	copy = copylist (root);
	printf ("copy ->  ");
	writelist (copy);
	printf ("address root= %d copy= %d\n",(int)root,(int)copy);

	
	// sorting with insertionsort
	printf ("\ninsertionsort -> ");
	node1 = insertsort (root);
	writelist (node1);


	// sorting with selectionsort
	printf ("selectionsort -> ");
	node1 = selectsort (root);	
	writelist (node1);

	return 0;
}
