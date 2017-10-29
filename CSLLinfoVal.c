#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *next;
};

struct node *first = NULL;

void display()
{
	struct node *temp;
	if(first==NULL)
	{
		printf("List is Empty!\n");
		return;
	}
	
	temp=first;
	while(temp->next!=first)
	{
		printf("%d->", temp->info);
		temp=temp->next;
	}
	printf("%d\n", temp->info);
}
void insertFront()
{
	struct node *new, *temp;
	new=(struct node *) malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d", &new->info);

	new->next=first;
	
	temp=first;
	while(temp->next!=first)
		temp=temp->next;

	temp->next=new;

	first=new;


}
void deleteFront()
{
	struct node *temp;
	temp=first;

	if(first==NULL)
		printf("List is Empty!\n");
	else if(temp->next==first)
		{
			free(temp);
			first=NULL;
		}
	else
	{
		while(temp->next!=first)
			temp=temp->next;
		temp->next=first->next;
		first=first->next;
	}
}
void insertEnd()
{
	struct node *new, *temp;
	temp=first;
	
	new=(struct node *) malloc(sizeof(struct node));
	printf("Enter the value : ");
	scanf("%d", &new->info);

	if(first==NULL)
	{
		first=new;
		new->next=first;
	}	
	else
	{
		while(temp->next!=first)
			temp=temp->next;

		temp->next=new;
		new->next=first;
	}

}
void deleteEnd()
{
	struct node *temp, *prev;
	temp=first;

	if(first==NULL)
		printf("List is Empty\n");
	else if(first->next==first)
	{
		first=NULL;
		free(temp);
	}
	else
	{
		temp=first;
		while(temp->next!=first)
			{	prev=temp;
				temp=temp->next;
			}
			prev->next=first;
			free(temp);
	}
}
int main()
{
	int i;

	while(1)
	{
		printf("1.Insert End\n2.Delete End\n3.Insert Front\n4.Delete Front\n5.Display\n6.Exit\n\n");
		printf("Enter your choice : ");
		scanf("%d", &i);
		switch(i)
		{
			case 1 : insertEnd();
					 break;
			case 2 : deleteEnd();
					 break;
			case 3 : insertFront();
					 break;
			case 4 : deleteFront();
					 break;
			case 5 : display();
					 break;
			case 6 : return 0;

		}
	}
}
