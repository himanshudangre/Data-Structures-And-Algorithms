#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}*first = NULL;

//fun for creating a lik=nked list

void create ( int A[],int n)
{
	int i;
	struct node *t,*last;
	first = (struct node*)malloc(sizeof(struct node));
	first->data=A[0];
	first ->next=NULL;
	last =first;
	
	for(i=1;i<n;i++)
	{
		t=(struct node*)malloc(sizeof(struct node));
		t->data=A[i];
		t->next = NULL;
		last->next=t;
		last=t;

	}
}	
void rdisplay(struct node *p)
{
	if(p!=NULL)
	{
		printf("%d ",p->data);
		rdisplay(p->next);
	}
}

void display(struct node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p=p->next;
	}
}
struct node* lsearch(struct node *p,int key)
{
	while(p!=NULL)
	{
		if(key== p->data )
		
			return p;
		else
			p=p->next;
	}

	
	return NULL;
}
int main()
{
	struct node *temp;
	int A[]={3,5,7,10,15};
	
	create(A,5);
	rdisplay(first);
	
	temp = lsearch(first,5);

	if(temp) 
		printf("key is found %d\n",temp->data);             //ie temp!=null	
	else
		printf("key not found \n");
	return 0;
	
}
