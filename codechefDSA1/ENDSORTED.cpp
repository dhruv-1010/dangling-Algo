#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long i,n,fn,f1;
	    cin>>n;
	    long ar[n];
	    for(i=0;i<n;i++){
	        cin>>ar[i];
	    }
	    for(i=0;i<n;i++){
	        if(ar[i]==1){
	            f1 = i;
	        }
	        else if(ar[i]==n){
	            fn=i;
	        }
	    }
	    if(f1>fn){
	        cout<<f1+n-fn-1-1<<"\n";
	    }else{
	    cout<<f1+n-fn-1<<"\n";
	    }
	   
	}
	return 0;
}
