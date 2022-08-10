#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    ll n,i,cnt;
    cin>>n;
    vector<int> ar(n);
    for(i=0;i<n;i++) cin>>ar[i];
    // problem was i wasnt mutable
    
    // to search for the index loop or the code below buy anyway
    for(i=0;i<n;i++) if(ar[i]<=7)cnt=i;
    cout<<cnt+1<<endl;
    
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
