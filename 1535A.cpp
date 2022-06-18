// 1535A.cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t;
	cin>>t;
	while(t--){
        int ar[4];
        int i;
        int n =4;
	    for(i=0;i<n;i++) cin>>ar[i];
	    if(max(ar[0],ar[1])<min(ar[2],ar[3])||min(ar[0],ar[1])>max(ar[2],ar[3])){
	        cout<<"No"<<endl;
	    }else{
	        cout<<"Yes"<<endl;
	    }
	    
		}
	return 0;
}