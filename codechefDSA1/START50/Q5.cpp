#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int n,i;
	   cin>>n;
	   //case 1 
	   if(n==3){
	       for(i=1;i<=n;i++){
	           cout<<i<<" ";
	       }cout<<""<<"\n";
	   }else{
	        cout<<n<<" "<<n-2<<" ";
	        for(i = 1;i<n-3;i++) cout<<i<<" ";
	        cout<<n-3<<" "<<n-1<<"\n";
	   }
	   //case 2
	   
	   
	   
	}
	return 0;
}
