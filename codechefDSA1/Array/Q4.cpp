#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    int i,n,m,k,cnt=0;
    cin>>n>>m>>k;
    vector<int> ans(n);
    for(i=0;i<n;i++) cin>>ans[i];
    for(i=0;i<n;i++){ 
        if(ans[i]==0){
            break;
            }
        cnt++;
    }
    if(cnt<m){
        cout<<0<<endl;
        return;}
    else if(cnt==n){
        cout<<100<<endl;
        return;
    }else{
        cout<<k<<endl;
    }
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
