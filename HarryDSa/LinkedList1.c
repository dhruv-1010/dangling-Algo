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
     return 0;
}