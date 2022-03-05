#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node *head=0,*newnode,*temp,*current,*pre,*nextnode;
void create()
{
	int n;
	printf("size\n");
	scanf("%d ",&n);
	for(int i=0;i<n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			temp=head=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
}
void reverse()
{
	nextnode=current=head;
	pre=0;
	while(nextnode->next!=0)
	{
		nextnode=nextnode->next;
		current->next=pre;
		pre=current;
		current=nextnode;
	}
	head=pre;
}
void display()
{
	temp=head;
	while(temp->next!=0)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
int main()
{
	create();
	reverse();
	display();
}
