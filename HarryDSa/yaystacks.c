#include <stdio.h>
#include <stdlib.h>
// stack are just LIFO [last in first out] very useful and very cool
// implementing it using array is like super easy
// just define an array with a variable storing index of top_most element
// if stack is empty top = -1;
// if stack is full top  = array.size-1;
// lets implement it 

typedef struct stack{
    int size;
    int top;
    int* arr;
}stack;
// buggy here BUGGY D. CLOWN no buggy my bro 
// bug has been successfully terminated
// as top was pointing to arrays top element location i was wrong to use < operator as i kinda have this habit
// not gonna do it next time

void print(stack* mainstack){
    int i,val;
    for(i = 0;i<=(mainstack->top);i++){
        val = mainstack->arr[i];
        printf("%d ",val);
    }printf("\n");
}
// works fine
int isfull(stack* mainstack){
    int valueoftop = mainstack->top;
    if(valueoftop == mainstack->size-1){
        return  1;
    }else{
        return 0;
    }
}
// works fine
int isempty(stack* mainstack){
    int valueoftop = mainstack->top;
    if(valueoftop == -1){
        return  1;
    }else{
        return 0;
    }
}
// works fine
void push(stack* mainstack){
    if(isfull(mainstack)){
        printf("Stack already full");
    }else{
    int n;
    printf("Enter element to push\n");
    scanf("%d",&n); 
    mainstack->top++;
    mainstack->arr[mainstack->top] = n;
    }
}
// works fine
void pop(stack* mainstack){
    if(isempty(mainstack)){
        printf("stack alreaddy full\n");
    }
    else{
        mainstack->arr[mainstack->top] = 0;
        mainstack->top--;
        printf("pop successful\n");
    }
}
void peek(stack* mainstack){
    if(isempty(mainstack)){
        printf("stack empty !!! no head element");
    }else{
        printf("%d",mainstack->arr[mainstack->top]);
    }
}
// main function 
int main(){
    int arsize;
    stack* mainstack = (stack *)malloc(sizeof(stack));
    mainstack->size =arsize= 5;
    mainstack->top = -1;
    mainstack->arr  = (int *)malloc(sizeof(arsize*sizeof(int)));
    push(mainstack);
    push(mainstack);
    push(mainstack);
    push(mainstack);
    push(mainstack);
    print(mainstack);
    pop(mainstack);
    print(mainstack);
    peek(mainstack);
    return 0;
}
// i dont really like this coding style  writing many function in one file 
// in the next phase of learning i would really like to improve this through OOP langauges.
// yay its working 
