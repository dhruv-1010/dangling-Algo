#include <iostream>
using namespace std;

int main() {
    int t,i,j;
    cin>>t;
    for (i=1;i<=t;i++) {
        if(i%2!=0){
        for(j=1;j<=t;j++) cout<<j*i<<" ";
        }
        else{
            for(j=t;j>0;j--) cout<<j*i<<" ";
        }
        cout<<""<<endl;
    }
	// your code goes here
	return 0;
}
