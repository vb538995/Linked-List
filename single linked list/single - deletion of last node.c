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
	printf("before deletion of last node \n");
	dis();
	del();
	printf("\nafter deletion of last node: \n");
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
	free(n);
}