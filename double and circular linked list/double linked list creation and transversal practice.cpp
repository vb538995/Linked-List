//creation and transversal of double linked list 
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
	int z,i;
	printf("ENTER THE NUMBER OF NODES YOU WANT TO CREATE : ");
	scanf("%d",&z);
	for(i=0;i<z;i++){
		if(head==NULL){
			m=(struct node*)malloc(sizeof(struct node));
			printf("enter the node %d : ",i+1);
			scanf("%d",&m->info);
			m->prev=NULL;
			m->link=NULL;
			head=m;
		}
		else{
			n=(struct node*)malloc(sizeof(struct node));
			printf("enter the node %d : ",i+1);
			scanf("%d",&n->info);
			n->link=NULL;
			n->prev=m;
			m->link=n;
			m=n;
		}
    }
	printf("OUTPUT : ");
	struct node *temp;
	temp=n;
	while(temp!=NULL){
	printf("%d\t",temp->info);
	temp=temp->prev;
    }
	return 0;
}
