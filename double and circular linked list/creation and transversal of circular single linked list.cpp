//creation and transversal of circular linked list
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
    int z,i;
    printf("enter the number of nodes you want to create : ");
    scanf("%d",&z);
    for(i=0;i<z;i++){
    	if(head==NULL){
    		m=(struct node*)malloc(sizeof(struct node));
    		printf("enter the value of 1st node: ");
    		scanf("%d",&m->info);
    		m->link=NULL;
    		head=m;
		}
		else{
			n=(struct node*)malloc(sizeof(struct node*));
			printf("enter the value of the node %d: ",i+1);
			scanf("%d",&n->info);
			n->link=head;
			m->link=n;
			m=n;	
		}
	}
	printf("OUTPUT : \t");
	struct node *temp;
//	printf("%d\t",head->info);
	//temp=head;
	for(temp=head->link;temp!=head;temp=temp->link){
		printf("%d\t",temp->info);
		}
		if(temp!=head)
		{
			printf("%d",n->info);
		}
	
	return 0;
}
