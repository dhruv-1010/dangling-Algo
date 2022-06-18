#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a,b;
		if(n%3==0){
		    cout<<n/3<<" "<<n/3<<endl;
		}
	    
		if(n%3==1){
		    cout<<(n+2)/3<<" "<<(n-1)/3<<endl;
		}
		
		
		if(n%3==2){
		    cout<<(n-2)/3<<" "<<(n+1)/3<<endl;
		}
	}
	return 0;
}