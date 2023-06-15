// WAP to insert an element at the end of the linked list.

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

void display(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp -> next;
    }
}

struct Node* insertAtEnd(int element, struct Node* head){
    struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
    struct Node* temp2 = head;
    if(head == NULL){
        temp -> data = element;
        temp -> next = NULL;
        return temp;
    }
    else{
        while(temp2 -> next != NULL){
            temp2 = temp2 -> next;
        }
        temp2 -> next = temp;
        temp -> data = element;
        temp -> next =  NULL;
        return head;
    }
}
int main(){
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
    head = (struct Node*) malloc (sizeof(struct Node));
    second = (struct Node*) malloc (sizeof(struct Node));
    third = (struct Node*) malloc (sizeof(struct Node));
    fourth = (struct Node*) malloc (sizeof(struct Node));
    fifth = (struct Node*) malloc (sizeof(struct Node));
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;
    
    fifth->data = 5;
    fifth->next = NULL;
    int element;
    printf("Enter the info that will be inserted at the end \n");
    scanf("%d", &element);
    printf("Before insertion : \n");
    display(head);
    printf("\n");
    head = insertAtEnd(element, head);
    printf("After insertion : \n");
    display(head);
}
