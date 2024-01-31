//single first node deletion
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
int no,i,z;
struct node *head=NULL,*m,*n,*temp;
void create(int x);
void dis();
void del();
int main(){
	
	head=m=n=NULL;
	printf("enter the number of nodes you want to create :");
	scanf("%d",&no);
	for(i=0;i<no;i++){
		printf("enter the value of node%d: ",i+1);
		scanf("%d",&z);
		create(z);
	}
	printf("before deletion of first node \n");
	dis();
	del();
	printf("\n after deletion of first node: \n");
	
	dis();
	
}

void create(int x){
	
		if(head==NULL){
			m=(struct node*)malloc(sizeof(struct node));
	        m->info=x;
			m->link=NULL;
			head=m;
		}
		else{
			n=(struct node*)malloc(sizeof(struct node));
			n->info=x;
			n->link=NULL;
			m->link=n;
			m=n;
		}
	
}


void dis(){
	
	temp=head;
	while(temp!=NULL){
		printf("%d\t",temp->info);
		temp=temp->link;
	}
}

void del(){
	int d;
	printf("\nenter the position at which you want to delete the node :");
	scanf("%d",&d);
	struct node *q,*w;
	q=w=head;
	for(i=0;i<d-2;i++){
		q=q->link;
	}
	for(i=0;i<d-1;i++){
		w=w->link;
	}
	q->link=q->link->link;
	free(w);
}