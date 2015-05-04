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
	node *node1,*node2,*after;

	node2 = input;

	while (input != NULL)
	{
		node1 = input;
		input = input->next;

		after = sentinel;
		while
	}

	/*node *insert,*node1,*root2;
	node *sentinel;
	node1 = root;
        insert = root2 = X;
	sentinel->next = sentinel = X;
	sentinel->next = root2;
        insert->value = node1->value;
        insert->next = NULL;
        node1 = node1->next;
	if (node->value < insert->value)
	{
		insert->next = sentinel->next;
		sentinel->next = insert;
	}
	else
	{
		insert->next = no
	}
        while (node1 != NULL)
        {
		insert = root2;
		while (insert->next!=NULL && insert->next->value>node1->value)
		{
			insert = insert->next;
		}
        }*/

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
	printf ("root ->  ");
	writelist (root);
	copy = copylist (root);
	printf ("copy ->  ");
	writelist (copy);
	printf ("address root= %d copy= %d\n",(int)root,(int)copy);

	
	// sorting with insertionsort
	node1 = insertnode (root);	
	writenode (node1);

	return 0;
}
