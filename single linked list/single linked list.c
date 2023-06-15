// node creation at the beginnig of the linked list;
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
int main(){
	struct node *head=NULL;
	struct node *M=NULL;
	struct node *N=NULL;
	int num,i;
	printf("enter the number of nodes you want to enter : ");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		if(head==NULL){
			N = (struct node*)malloc(sizeof(struct node));
			printf("\nenter the value of node %d: ",i+1);
			scanf("%d",&N->info);
			N->link=NULL;
			head=N;
			
		}
		else{
		M=(struct node*)malloc(sizeof(struct node));
		printf("\nenter the value of node %d: ",i+1);
		scanf("%d",&M->info);
		M->link=NULL;
		N->link=M;
		N=M;
	}
	}
	printf("\n output :");
	struct node *temp;
	temp=head;
	while(temp!=NULL){
		printf("%d \t",temp->info);
		temp=temp->link;
	}
	return 0;
}
