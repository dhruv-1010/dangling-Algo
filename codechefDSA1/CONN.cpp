#include <bits/stdc++.h>
using namespace std;
int solve(long long n){
    if(n<2)return 0;
    if(n%2==0||n%7==0){return 1;}
    else{
        long long i;
        for(i=1;i<=n;i++){
            if((n-2*i)%7==0) return 1;
    }
        
    }
    return 0;
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   long long n;
	   cin>>n;
	   if(solve(n))cout<<"YES"<<"\n";
	   else cout<<"NO"<<"\n";
	}
	return 0;
}
