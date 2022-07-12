#include <stdio.h>
#include <stdlib.h>
struct array{
    int size;
    int usize;
    int* base;
};
void Create(struct array* a,int size,int usedsize){
    a->size=size;
    a->usize=usedsize;
    a->base=(int *)malloc(size*sizeof(int));
}
void print(struct array* a){
    int i;
    for(i=0;i<a->usize;i++){
        printf("%d ",(a->base)[i]);
    }
}
void cin(struct array* a){
    int n;
    int i;
    for(i=0;i<a->usize;i++){
        scanf("%d",&n);
        (a->base)[i]=n;
    }
}
void insert(struct array *a,int pos){
    
}
int main(){
    struct array arr;
    Create(&arr,10,9);
    cin(&arr);
    print(&arr);
    return 0;
}