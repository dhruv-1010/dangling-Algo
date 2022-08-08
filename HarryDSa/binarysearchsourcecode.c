#include <stdio.h>
#include <stdlib.h>
int main(){
    // plate code
    int size=5,low,mid,high,arr[5] = {0,5,10,15,20};
    low=0;
    high=4;
    int element = 5;//depends
    while (low<=high){
        mid=(low+high)/2;
        if(arr[mid]== element){
            printf("found %d index %d",element,mid);
        }
        if(arr[mid]>element){
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }
    
    return 0;

}
    // binary search needs a sorted Array
    // remember dictionary example
    // start by low=0,high=size-1;
    // mid=[low+high]*0.5
    // [low][][][][mid][][][][][high]
    // if arr[mid]== elem echo good
    // if arr[mid]<elem high=mid-1 we would change high as ele is in low -- mid range clearly and its not mid so
    // [low][][][][high][][][][][]
    // if arr[mid]<elem low=mid+1 we would change low as ele is in mid -- high range clearly and its not mid so
    // repeating it until  low<=high as clearly  if low==high ele is not present
    // this reduces iteration by at least two times every time we do something thus making its complexity O[log2n]

    