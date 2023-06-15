// adding a node at the beginning of the linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
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
    		printf("enter the value of %d node: ",i+1);
    		scanf("%d",&m->info);
    		m->link=NULL;
    		head=m;
		}
		else{
			n=(struct node*)malloc(sizeof(struct node*));
			printf("enter the value of the node %d: ",i+1);
			scanf("%d",&n->info);
			n->link=NULL;
			m->link=n;
			m=n;	
		}
	}
	struct node *val;
	val=(struct node*)malloc(sizeof(struct node));
	printf("enter the position at which you want to insert the node : ");
	scanf("%d",&psn);
	printf("enter the value that you want to print at asked position : ");
	scanf("%d",&val->info);

	printf("OUTPUT : \t");
	struct node* h;
	h=head;
	for(i=0;i<=z;i++){
		printf("%d\t",h->info);
		h=h->link;
		if(i==psn-2){
			printf("%d\t",val->info);
			i++;
		}
	}
	return 0;
}
