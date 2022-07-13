#include <stdio.h>
#include <stdlib.h>
// my implemetation a linked list is just an array with a pointer to next object last obj is null
// required struct its required a pointer to itself
// ex 7 -> 9-> 11->NULL[list end]
struct node{
    int data;
    struct node* next;
};
void Linkedlist(struct node* ptr)
{
    while(ptr!=NULL)
    {
    printf("%d ",ptr->data);
    ptr = ptr->next;
    }printf("\n");
}
struct node* insertlast(struct node*ptr){
    struct node* last = (struct node*)malloc(sizeof(struct node));
    int data;
    int n;
    // bug here
    scanf("%d",&n);
    //bug was heavyyyy.
    last->data=n;
    ptr->next=last;
    last->next=NULL;
}

struct node* inserthead(struct node*head){
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    int data;
    int n;
    // bug here
    scanf("%d",&n);
    ptr->data=n;
    //bug was heavyyyy.
    ptr->next=head;
    head= ptr;
    return head;
}
// everything down is wrong implement it again
struct node* insertindexp(struct node*head,int index,int n){
    struct node* p =(struct node*)malloc(sizeof(struct node));
    p->data=n;
    struct node* q =(struct node*)malloc(sizeof(struct node));
    q=head;
    int i=0;
    while(i!=index-1){
        q=q->next;
        i++;
    }
    p->next=q->next;
    q->next=p;
    return head;
    
}
int main(){
     struct node* head = (struct node*) malloc(sizeof(struct node));
     struct node* second = (struct node*) malloc(sizeof(struct node));
     struct node* third = (struct node*) malloc(sizeof(struct node));
    //  linking nodes
    head->data=7;
    head->next=second;
    // 
    second->data=9;
    second->next=third;
    //
    third->data=11;
    third->next=NULL;
    //  
    Linkedlist(head);
    // insertlast(third);
    head=inserthead(head);
    Linkedlist(head);
    head = insertindexp(head,3,5);
    Linkedlist(head);
    
     return 0;
}