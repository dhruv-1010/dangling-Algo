#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin>>n>>x;
    if(x<n){
        cout<<-1<<"\n";
        return;
    }else{
        // use property gcd(1,anything else) = 1
        // using x-n+1 because of OUTPUT
        
        int head = x-n+1;
        cout<<head<<" ";
        for(int i=1;i<=n;i++){
            if(i!=head) cout<<i<<" ";
        }cout<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}
