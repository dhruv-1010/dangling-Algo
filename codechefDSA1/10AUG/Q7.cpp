#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b,c;
    cin>>a>>b>>c;
    cout<<max({a+b,c+a,b+c})<<"\n";
    
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
