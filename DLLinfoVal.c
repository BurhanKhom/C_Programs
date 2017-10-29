#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *prev;
	int info;
	struct node *next;
};

struct node *first = NULL;

void insertEnd()
{
	struct node *new, *temp;
	temp=first;
	new= (struct node *) malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d", &new->info);
	new->next=NULL;
	new->prev=NULL;

	if(temp==NULL)
		first=new;
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;

		temp->next=new;
		new->prev=temp;
	}
}

void display()
{	
	struct node *temp;
	temp=first;
	if(temp==NULL)
		printf("List is Empty!\n");
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d->", temp->info);
			temp=temp->next;
		}
		printf("%d\n", temp->info);
	}
}
void deleteEnd()
{
	struct node *temp;
	temp=first;
	if(temp==NULL)
		printf("List is Empty!\n");
	else if(first->next==NULL)
	{
		first=NULL;
		free(temp);
	}
	else
	{
		while(temp->next!=NULL)
			temp=temp->next;
		temp->prev->next=NULL;
		free(temp);
	}
}
void insertFront()
{
	struct node *new;
	new=(struct node *) malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d", &new->info);
	new->next=NULL;
	new->prev=NULL;

	if(first==NULL)
		first=new;
	else
	{
		new->next=first;
		new->next->prev=new;
		first=new;
	}
}
void deleteFront()
{
	struct node *temp;
	if(first==NULL)
		printf("List is Empty!\n");
	else if(first->next==NULL)
	{
		first=NULL;
		free(temp);
	}
	else
	{
		temp=first;
		temp->next->prev=NULL;
		first=temp->next;
		free(temp);
	}
}
void reverseTraversal()
{
	struct node *temp;
	temp=first;
	if(temp==NULL)
		printf("List is Empty!\n");
	else
	{	printf("\n\nTraversing the List in reverse Order....\n");
		while(temp->next!=NULL)
			temp=temp->next;


		while(temp->prev!=NULL)
		{
			printf("%d->", temp->info);
			temp=temp->prev;
		}
		printf("%d\n", temp->info);
	}
}
int main()
{
	int i;
	while(1)
	{
		printf("Doubly Linked List Operations : \n");
		printf("1. Insert End\n2. Display\n3. Insert Front\n4. Delete End\n5. Delete Front\n6. Reverse Traversal\n7. Exit\n\n");
		printf("Enter your choice : ");
		scanf("%d", &i);

		switch(i)
		{
			case 1 : insertEnd();
					 break;
			case 2 : display();
					 break;
			case 3 : insertFront();
					 break;
			case 4 : deleteEnd();
					 break;
			case 5 : deleteFront();
					 break;
			case 6 : reverseTraversal();
					 break;
			case 7 : return 0;
		}
	}
}