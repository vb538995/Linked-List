//single linked list creation and traversal
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
int main(){
	int no,i,psn;
	struct node *head , *m , *n;
	head=m=n=NULL;
	printf("enter the number of nodes you want to create :");
	scanf("%d",&no);
	for(i=0;i<no;i++){
		if(head==NULL){
			m=(struct node*)malloc(sizeof(struct node));
			printf("Enter the value of node%d: ",i+1);
			scanf("%d",&m->info);
			m->link=NULL;
			head=m;
		}
		else{
			n=(struct node*)malloc(sizeof(struct node));
			printf("Enter the value of node%d: ",i+1);
			scanf("%d",&n->info);
			n->link=NULL;
			m->link=n;
			m=n;
		}
	}
	struct node *val;
	val=(struct node*)malloc(sizeof(struct node));
	printf("enter the podsition at which you want to insert new node: ");
	scanf("%d",&psn);
	printf("enter value that you want to add at specific position the list: ");
    scanf("%d",&val->info);
    val->link=NULL;
    struct node *q , *w;
    q=w=head;
    
    for(i=0;i<psn-2;i++){
    	q=q->link;
	}
	for(i=0;i<psn-1;i++){
    	w=w->link;
	}
	q->link=val;
	val->link=w;
	
	
	struct node *temp;
	temp=head;
	printf("OUTPUT :       ");
	while(temp!=NULL){
		printf("%d\t",temp->info);
		temp=temp->link;
	}
}