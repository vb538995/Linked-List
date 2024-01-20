//creation of double linked list 
#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node *prev;
	int info;
	struct node *link;
};
int main(){
	struct node *head=NULL;
	struct node *m=NULL;
	struct node *n=NULL;
    int z,i,psn;
    printf("enter the number of nodes you want to create : ");
    scanf("%d",&z);
    for(i=0;i<z;i++){
    	if(head==NULL){
    		m=(struct node*)malloc(sizeof(struct node));
    		printf("enter the value of 1st node: ");
    		scanf("%d",&m->info);
    		m->prev=NULL;
    		m->link=NULL;
    		head=m;
		}
		else{
			n=(struct node*)malloc(sizeof(struct node*));
			printf("enter the value of the node %d: ",i+1);
			scanf("%d",&n->info);
			n->link=NULL;
			n->prev=m;
			m->link=n;
			m=n;	
		}
	}
	
	printf("enter the position of which node you want to delete: ");
	scanf("%d",&psn);
	struct node *q , *s, *e;
	q=head;
	s=head;
	e=head;
	for(i=0;i<psn-2;i++){
		q=q->link;
	}
	for(i=0;i<psn-1;i++){
		s=s->link;
	}
	for(i=0;i<psn;i++){
		e=e->link;
	}
	q->link=s->link;
	e->prev=s->prev;
	free(s);
	
	printf("OUTPUT : \t");
	struct node *temp;

	temp=head;
	while(temp!=NULL){
		printf("%d\t",temp->info);
		temp=temp->link;
	}
	return 0;
}
