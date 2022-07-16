#include <stdio.h>
#include <stdlib.h>
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
    int len,i;
    scanf("%d",&len);
    struct node *head, *current, *temp;
    for(i=0;i<len;i++){
        int n;
        current=(struct node*)malloc(sizeof(struct node));
        printf("Enter element %d : ",(i+1));
        scanf("%d",&n);
        current->data=n;
        if(i==0){
            head = temp = current;
        }else{
            temp->next=current;
            temp = current;
        }

    }  
    temp->next= head;
    Linkedlist(head);
    return 0;
}