#include <stdio.h>
#include <stdlib.h>
int linear(int arr[],int size,int elem){
    int i;
    for ( i = 0; i < size; i++)
    {
        if(arr[i]==elem) return i;
        /* code */
    }
    return -1;
    
}
    //lets implement binary search
    // i dont know why its not running but i would search more
    // XD
int binary(int arr[],int size,int elem){
    int low=0,high=size-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==elem) return mid;
        if(arr[mid]<elem) low=mid+1;
        else {
            high = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[55]={1,3,5,7,9,11,13,15,17};
    int size=sizeof(arr)/sizeof(int);
    int search =3;
    // int ss=linear(arr,size,search);
    // if(ss!=-1){
    //     printf("element %d at index %d ",search,ss);
    // }else{
    //     printf("not Found");
    // }
    int ss=binary(arr,size,search);
    printf("element %d at index %d ",search,ss);

    return 0;
}