#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int i,n;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++) cin>>ar[i];
    int cnt=ar[0],val=0;
    for(i=1;i<n;i++){
        if(cnt==0) break;
        cnt = cnt-1 + ar[i];
        val++;
    }cout<<cnt+val<<endl;
    
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
