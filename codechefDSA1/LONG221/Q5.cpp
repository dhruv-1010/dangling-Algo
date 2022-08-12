#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op  ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    ll x;
    cin>>x;
//   the most important part was i*i < x why use this i dont know
    for(ll y=1;y*y<x;y++){
        ll a = x-2*y;
        if(a==0) continue;
        ll b = y+2;
        if((a%b)==0){cout<<"Yes"<<endl;return;}
    }
    cout<<"No"<<endl;
    
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
