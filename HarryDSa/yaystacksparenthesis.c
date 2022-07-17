#include <stdio.h>
#include <stdlib.h>
typedef struct stack{
    int size;
    int top;
    int* arr;
}stack;
char stacklast(stack* m){
    return m->arr[m->top];
}
int solve(stack* stackk,char array[],int size){
    int i;
    for(i=0;i<size;i++){
        if(array[i]=="("){
            stackk->top++;
            stackk->arr[stackk->top] = "(";
        }
        if(array[i]=="("){
            char ch = stacklast(stackk);
            if(ch!=")")return 0;
        }
    }
    return 1;
}

int main(){
    stack* mainstack =(stack*) malloc(sizeof(stack)); 
    mainstack->top=-1;
    int size=9;
    // printf("stack size \n"); i can take inputs but that is not imp here
    // scanf("%d",&size);       concept of parenthesis matching is
    // printf("enter your ")
    mainstack->arr = (char *) malloc(size*sizeof(char));
    char chr[INT_MAX] = "((5+5+6))";
    printf("code begin \n");
    solve(mainstack,chr,size);
    return 0;

}