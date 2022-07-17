#include <bits/stdc++.h>
// digit sum a recursive function which outputs the value of 
// array upto n digits from 
int digitsum(int ar[],int n){
    if(n<0) return 0;
    else return digitsum(ar,n-1)+ar[n];
}
using namespace std;
int main(){
    // basic recursion
    int ar[]={1,2,3,4,5,6,7};
    cout<<digitsum(ar,0)<<"\n";
    return 0;
}