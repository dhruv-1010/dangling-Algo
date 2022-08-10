#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int tot = min(b,a+c);
    if(n<=tot) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
