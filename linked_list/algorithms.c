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
	while (root->next != NULL)
	{
		root = root->next;
		printf ("%d ",root->value);
	}
	printf ("\n");
}

void add_after (node *after_me, node *node1)
{
	node *new = X;

	new->value = node1->value;
	new->next = after_me->next;
	after_me->next = new; 
}

node* copylist (node *root)
{
	node *copy_root,*copy;
	
	copy_root = copy =  X;
	while (root->next != NULL)
	{
		copy->next = X;
		copy = copy->next;
		root = root->next;
		copy->value = root->value;
	}
	copy->next = NULL;

	return copy_root;
}

node* insertionsort (node *root)
{
	node *sorted_root, *sorted;

	sorted_root  =  X;
	sorted_root->next = NULL;
	
	root = root->next;
	add_after (sorted_root, root);		// add first item to sorted list


	while (root->next != NULL)
	{
		root = root->next;

		sorted = sorted_root;
		while (sorted->next != NULL && root->value > sorted->next->value)	// skip until proper position
			sorted = sorted->next;
		add_after (sorted, root);
	}

	return sorted_root;
}

node* selectionsort (node *root)
{
	int max;
	node *list, *sorted, *max_node;

	sorted = X;
	sorted->next = NULL;
	

	list = root;
	while (list->next != NULL)
	{
		max = list->next->value;	// compare with list->next
		max_node = list;
		
		while (list->next != NULL)
		{
			if (list->next->value > max)
			{
				max = list->next->value;	// keep before node which contain max value
				max_node = list;
			}
			list = list->next;
		}
		
		add_after (sorted, max_node->next);	// add max item to sorted
		max_node->next = max_node->next->next;		// delete added max item from list
		
		list = root;
	}

	return sorted;
}

int main ()
{
	int i,n;
	node *root, *node1;

	// creating list that contains  top_sentinel and n_items
	node1 = root = X;
	scanf ("%d",&n);
	for (i=0; i<n; i++)
	{
		node1->next = X;
		node1 = node1->next;
		scanf ("%d",&node1->value);
	}
	node1->next = NULL;


	// copying list
	printf ("Root >>   ");
	writelist (root);
	printf ("Copy >>   ");
	node1 = copylist (root);
	writelist (node1);
	printf ("Adress Root=%d Copy=%d\n",(int)root,(int)node1);
	

	/*
		insertion sort 
		-------------------- 
		take item from input list and add to proper position in sorted output list
	*/
	printf ("insertionsorted >> ");
	node1 = insertionsort (root);
	writelist (node1);


	/*
		selection sort
		--------------------
		take max value item from input list and add to front of growing sorted output list 
	*/	
	printf ("selectionsorted >> ");
	node1 = selectionsort (root);
	writelist (node1);

	return 0;
}
