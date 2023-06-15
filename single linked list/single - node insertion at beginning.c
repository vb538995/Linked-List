//single linked list creation and traversal
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
int main(){
	int no,i;
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
	
	printf("enter value that you want to add at the beginning of the list: ");
    scanf("%d",&val->info);
    val->link=head;
    head=val;
	
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d\t",temp->info);
		temp=temp->link;
	}
}