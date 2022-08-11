#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define op ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long  ll;
typedef long l;
void solve(){
    ll n,cnt=0,r;
    cin>>n;
    if(n&(n-1)==0){
        cout<<0<<endl;
        return;
    }else{
        while(n!=1){
            r=n%2;
            if(r==1)cnt++;
            n=n/2;
        }
        cout<<cnt<<endl;
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
