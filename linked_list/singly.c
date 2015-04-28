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
        printf ("\n\n");
}


node* findnode (node *root, int a)
{
	node *node1;

	node1 = root;
	while (node1 != NULL)
	{
		if (node1->value == a)
			return node1;
		node1 = node1->next;
	}
	return NULL;
}


node* findnodebefore (node *root, int a)
{
	node *node1;

	node1 = root;
	while (node1->next != NULL)
	{
		if (node1->next->value == a)
			return node1;
		node1 = node1->next;
	}
	return NULL;
}


node* addatbeginning (node *root,node *new)
{
	new->next = root;
	return new;
}


node* addatend (node *root, node *new)
{
	node *node1;
	
	node1 = root;
	while (node1->next != NULL)
		node1 = node1->next;
	node1->next = new;

	return root;
}


node* addafter (node *node1, node *new)
{
	new->next = node1->next;
	node1->next = new;
	
	return node1;
}


node* deleteafter (node *node1)
{
	node1->next = node1->next->next;
	return node1;
}


int main ()
{
	node *root,*node1,*node2,*node3,*node4;
	int i,a;
	
	// sentinel
	root = X;

	// creating list 
	node1 = root;
        for (i=1; i<10; i++)
        {
                node1->value = i;
                node1->next = X;
                node1 = node1->next;
        }
        node1->value = i;
        node1->next = NULL;


	// writing list
	writelist (root);


	// finding nodes
	scanf ("%d",&a);
	node1 = findnode(root,a);
	if (node1 != NULL)
		printf ("node %d\n\n",a);
	else
		printf ("No found\n\n");


	// finding nodes before
	scanf ("%d",&a);
	node1 = findnodebefore (root,a);
	if (node1 != NULL)
                printf ("previous node %d\n",node1->value);
        else
                printf ("No found\n");


	// adding node at the beginning
	printf ("added 0 at beginnig\n");
	node2 = X;
	node2->value = 0;
	node2->next = NULL;
	root = addatbeginning (root,node2);
	writelist (root);


	// adding node at the end
	printf ("added 12 at end\n");
	node3 = X;
	node3->value = 12;
	node3->next = NULL;
	root = addatend (root,node3);
	writelist (root);

	// added node after other nodes
	printf ("added 11 after 10\n");
	node1 = root;
	while (node1->value != 10)
		node1 = node1->next;
	node4 = X;
	node4->value = 11;
	node4->next = NULL;
	node1 = addafter (node1,node4);
	writelist (root);


	// deleting nodes
	printf ("delete odd numbers\n");
	node1 = root;
	while (node1->next != NULL)
	{
		if (node1->next->value % 2)
			node1 = deleteafter (node1);
		node1 = node1->next;
	}
	writelist (root);

	return 0;
}
