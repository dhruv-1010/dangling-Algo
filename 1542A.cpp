#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t;
	cin>>t;
	while(t--){
		int i,n,ecount=0,ocount=0;
		cin>>n;
		int size=2*n;
		int ar[size];
		for(i=0;i<size;i++) cin>>ar[i];
		for(i=0;i<size;i++) {
		    if(ar[i]&1){
		      ocount++;  
		    }else{
		       ecount++; 
		    }
		}
		if(ecount==ocount)cout<<"Yes"<<"\n";
		else cout<<"No"<<"\n";
	}
	return 0;
}