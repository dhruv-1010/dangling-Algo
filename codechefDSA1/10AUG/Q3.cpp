#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    l n,s,a;
    cin>>n>>s;
    if(s<=n) cout<<s<<endl;
    else{
        cout<<2*n-s<<endl;
    }
}
int main() {
    op;
	// your code goes here
	l t;
	cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}
