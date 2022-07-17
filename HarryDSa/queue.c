// appraoch one -> using top element keeping track of index of inserted element
#include <stdio.h>
#include <stdlib.h>
typedef struct q{
    int size;
    int top;
    int* arr;
}queue;
void enque(queue* ptr,int n){
    ptr->top++;
    ptr->arr[ptr->top] = n;
    printf("enque done \n");
}
void print(queue* ptr){
    int i;
    for(i = 0;i<=(ptr->top);i++){
        int a = ptr->arr[i];
        printf("%d ",a);
    }printf("\n");
}
void deque(queue* ptr){
    int i;
    for(i=0;i<=(ptr->top);i++){
        ptr->arr[i]=ptr->arr[i+1];
    }
    ptr->top--;
    printf("deque done \n");
}
int first_val(queue* ptr){
    return ptr->arr[0];
}

int last_val(queue* ptr){
    return ptr->arr[ptr->top];
}
int peek(queue* ptr,int pos){
    return ptr->arr[pos-1];
}
int main(){
    queue* mq =(queue*) malloc(sizeof(queue));
    mq->size=5;
    mq->arr = (int*) malloc(5*sizeof(int));
    mq->top = -1;
    enque(mq,5);
    enque(mq,4);
    enque(mq,3);
    enque(mq,2);
    enque(mq,1);
    print(mq);
    deque(mq);
    print(mq);
    deque(mq);
    print(mq);
    // int fv = first_val(mq);
    // int lv = last_val(mq);
    // int pee = peek(mq,4);
    // printf("%d %d %d",fv,lv,pee);
    return 0;
}