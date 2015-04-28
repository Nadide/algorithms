#include <stdio.h>
#include <malloc.h>
#define X (node*)malloc(sizeof(node))

struct node
{
	int value;
	struct node *prev;
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
	printf ("\n\n");
}


node* insert (node *node1, node *new)
{
	new->next = node1->next;
	node1->next = new;

	new->next->prev = new;
	new->prev = node1;

	return node1;
}


int main ()
{
	node *root,*node1,*node2,*node3;
	int i;

	// sentinel
	root = X;
	root->prev = NULL;

	// creating list
	node1 = root;
	for (i=1; i<10; i++)
	{
		node1->value = i;
		node2 = node1;
		node1->next = X;
		node1 = node1->next;
		node1->prev = node2;
	}
	node1->value = i;
	node1->next = NULL;


	// writing list
	writelist (root);


	// insert 1 after 5
	node1 = root;
	node3 = X;
	node3->value = 1;
	node3->next = NULL;
	while (node1->value != 5)
		node1 = node1->next;
	node1 = insert (node1,node3);
	writelist(root);

	return 0;
}
