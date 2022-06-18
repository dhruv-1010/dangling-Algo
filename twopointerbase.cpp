#include <bits/stdc++.h>
using namespace std;
int main(){
	int ar[10]={1,2,3,4,5,6,7,8,9,10};//we can take user inputted as well
	int k;
	cin>>k;
	int n = sizeof(ar)/sizeof(ar[0]);
	int i=0,j=n-1;
	while(i<j){
		if(ar[i]+ar[j]==k){ 
			cout<<"pair founded : "<<i<<" "<<j<<endl;
			break;}
		else if((ar[i]+ar[j])<k) i++;
		else j--;
	}
	return 0;
}