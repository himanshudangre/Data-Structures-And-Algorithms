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


int count(struct node *p)
{
	int l=0;
	while(p)
	{
		l++;
		p=p->next;
	}
	return l;
}

int Rcount(struct node*p)
{
	if(p!= NULL)
		return Rcount(p->next)+1;
		
	else
		return 0;
}
int main()
{
	int A[]={3,5,7,10,15};
	
	create(A,5);

	
	printf(" length is %d\n ",count(first));
	printf("by recursive method length is %d\n ",Rcount(first));
	return 0;
}
