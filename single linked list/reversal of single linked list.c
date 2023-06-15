// deletion of repeated data in linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int i,z;
struct node *m,*n,*head,*temp;
void create(int);
struct node* rev(struct node*);
void dis();
int main(){
	printf("enter the number of node that is to be created: ");
	scanf("%d",&z);
	create(z);
	head = rev(head);
	dis();
	return 0;
}

void create(int z){
	m=(struct node*)malloc(sizeof(struct node));
	printf("enter the data of the node %d:",i+1);
	scanf("%d",&m->data);
	m->link=NULL;
	head=m;
	for(i=1;i<z;i++){
	n=(struct node*)malloc(sizeof(struct node));
	printf("enter the data of the node %d:",i+1);
	scanf("%d",&n->data);
	n->link=NULL;
	m->link=n;
	m=n;
	}
}

struct node* rev( struct node *head){
	struct node *prev=NULL;
	struct node *next=NULL;
	while(head!=NULL){
		next=head->link;
		head->link=prev;
		prev=head;
		head=next;
	}
	head=prev;
	return head;
}

void dis(){
	temp=head;
	while(temp!=NULL){
		printf("%d\t",temp->data);
		temp=temp->link;
	}
}