#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *link;
}*first = NULL;

void Display (struct node *p)
{
	while(p!= NULL){
      printf("%d\n", p->data );
      p = p->link;
	}
}
int main() 
{
	int A[]={2,3,4,7,8};
	struct node *last, *t;
	first = (struct node *)(malloc(sizeof(struct node)));
	last = (struct node *)(malloc(sizeof(struct node)));
	t = (struct node *)(malloc(sizeof(struct node)));
	first->data = A[0];
	first->link = NULL;
	last = first;	 
	for(int i =1;i<=4;i++)
	{
		t->data = A[i];
		t->link = NULL;
		last->link = t;
		last = t;
		printf("%d\n", last->data );	

	}
	
	Display(first);	
	return 0;
}