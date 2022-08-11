#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int n,m,i;
    cin>>n>>m;
    set<int> ss;
    for(i=0;i<n;i++){
        int val;
        cin>>val;
        ss.insert(val);
    }
    if(ss.size()==m) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
int main() {
    op;
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	   solve();
	}
	return 0;
}
