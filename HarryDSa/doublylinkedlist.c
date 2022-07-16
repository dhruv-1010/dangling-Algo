#include <stdio.h>
#include <stdlib.h>
typedef struct doubly{
    struct doubly* prev_data;
    int data;
    struct doubly* next_data;
} doublyll;
int main(){
    doublyll*  head = (doublyll*)malloc(sizeof(doublyll));
    head->prev_data = NULL;
    head->data = 5;
    head->next_data = NULL;//place pointer to next element;
    return 0;
}