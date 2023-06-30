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
    int med = n/2;
    int odd = med,eve=med;
    for(i=1;i<=n;i++){
        if(i&1){
            odd++;
            cout<<odd<<" ";
        }else{
            cout<<eve<<" ";
            eve--;
        }
    }cout<<""<<endl;
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
