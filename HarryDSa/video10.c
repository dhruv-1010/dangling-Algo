#include <stdio.h>
#include <stdlib.h>

// traversal is just printing and scanning different values 
// of array
//insertion
int insert(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    int i;
    for(i = size-1; i >=index; i--) 
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
 }
 //traversal
 void display(int arr[],int size){
    int i;
    for(i =0;i<size;i++){
        printf("%d ",arr[i]);
    }printf("\n");
 }
int delete(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    int i;
    for(i = index; i <size-1; i++) 
    {
        arr[i]=arr[i+1];
    }
    return 1;
 }
int main(){
    int arr[55]={1,4,5,6,7};
    int size=5,element=15,index=3,capacity=55;
    display(arr,size);
    int ans = insert(arr,size,element,capacity,index);
    size+=1;
    if(ans==1){
    display(arr,size);
    printf("Insertion Successful \n");}
    else printf("Not successfull");
    delete(arr,size,element,capacity,0);
    size-=1;
    display(arr,size);

    return 0;
}