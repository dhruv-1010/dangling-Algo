#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t;
	cin>>t;
	while(t--){
	    int n,i,sum=0;
	    cin>>n;
	    int ar[n];
	    for(i=0;i<n;i++) cin>>ar[i];
	    for(i=0;i<n;i++) sum+=ar[i];
	    if(sum<n){
	        cout<<1<<endl;
	    }else{
	        cout<<sum-n<<endl;
	    }
	    
		}
	return 0;
}